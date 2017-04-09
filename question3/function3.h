#include<bits/stdc++.h>
using namespace std;
#include "boy.h"
#include "girl.h"
#include "couple.h"
#include "gift.h"


int bsize = 1;
int gsize = 1;

void readboys ( boy b[] )
{
	ifstream bfile("boy.dat");
	
	char name[20];
	int attractiveness,intelligence,budget,minattr,committed,maintenance,criteria,type;
	
	while ( !bfile.eof() )
	{
		bfile>>name>>attractiveness>>intelligence>>budget>>minattr>>committed>>type;
		b[bsize].setName(name);
		b[bsize].setAttractiveness(attractiveness);
		b[bsize].setIntelligence(intelligence);
		b[bsize].setBudget(budget);
		b[bsize].setMinattr(minattr);
		b[bsize].setCommitted(committed);
		b[bsize].setType(type);
		bsize++;
	}
	bfile.close();
}


void readgirls ( girl g[] )
{
	ifstream gfile("girl.dat");
	char name[20];
	int attractiveness,intelligence,budget,minattr,committed,maintenance,criteria,type;
	while ( !gfile.eof() )
	{
		gfile>>name>>attractiveness>>maintenance>>intelligence>>criteria>>committed>>type;
		g[gsize].setName(name);
		g[gsize].setAttractiveness(attractiveness);
		g[gsize].setMaintenance(maintenance);
		g[gsize].setIntelligence(intelligence);
		g[gsize].setCriteria(criteria);
		g[gsize].setCommitted(committed);
		g[gsize].setType(type);
		gsize++;
	}
}

int csize = 1;
void readcouple ( couple c[] ) 
{
	int i;
	ifstream cfile("couple.txt");
	char gname[20],bname[20];
	string str[10];
	while ( !cfile.eof() )
	{
		for ( i=0 ; i<10 ; i++ ) {
			cfile>>str[i];
		}
		//cfile>>gname>>andd>>bname>>garbage;
		//cout<<str[0]<<" "<<str[2]<<endl;
		for ( i=0 ; i<str[0].length() ; i++ )
			gname[i] = str[0][i];
		gname[i] = '\0';
		
		for ( i=0 ; i<str[2].length() ; i++ )
			bname[i] = str[2][i];
		bname[i] = '\0';
		//cout<<gname<<" "<<bname<<endl;
		c[csize].setBname(bname);
		c[csize].setGname(gname);
		csize++;	
	}
}

int gfsize = 1;
void readgift ( gift gf[] )
{
	ifstream gfile("gift.dat");
	int t,v,p;
	while ( !gfile.eof() )
	{
		gfile>>p>>v>>t;
		gf[gfsize].setPrice(p);
		gf[gfsize].setValue(v);
		gf[gfsize].setType(t);
		gfsize++;
	}
	int i,j;
	gift temp;
	for ( i=1 ; i<gfsize-1 ; i++ )
	{
		for ( j=i+1 ; j<gfsize-1 ; j++ )
		{
			if ( gf[j].getPrice() < gf[i].getPrice() )
			{
				temp = gf[i];
				gf[i] = gf[j];
				gf[j] = temp;
			}	
		}
	}
}

void calc ( couple c[] , gift gf[] , boy b[] , girl g[] )
{
	time_t now;
	int i,j,k,l,m,th,bi;
	int bh,gh;
	char bname[20],gname[20];
	ofstream giftfile("ans3.txt");
	for ( i = 1 ; i < csize-1 ; i++ )
	{
		bh = 0;	gh = 0;
		strcpy( bname , c[i].getBname() );

		for ( j = 1 ; j < 60 ; j++ )
		{
			if ( strcmp( bname,b[j].getName() ) == 0 )
				break;
		}

		strcpy(gname,c[i].getGname());
		for ( k=1 ; k < 40 ; k++ )
		{
			if ( strcmp( gname,g[k].getName() ) == 0 )
				break;
		}

		int btype = b[j].getType();	
		int gtype = g[k].getType();
		
		int totprice = 0;
		int totvalue = 0;

		switch ( btype )
		{
			case 0 : {
				m = g[k].getMaintenance();
				for ( l = 1 ; l < gfsize-1 ; l++ )
				{
					if ( m >= totprice )
					{
						totprice += gf[l].getPrice();
						totvalue += gf[l].getValue();
					}
					else
						break;
				}
				string dt = ctime(&now);				
				giftfile<<b[j].getName()<<" gifted "<<g[k].getName()<<"\n";
				for ( int x = 1 ; x <= l ; x++ )
				{
					now = time(0);
					string dt = ctime(&now);
					if ( gf[x].getType() == 0 ) giftfile<<"E ";
					else if ( gf[x].getType() == 1 ) giftfile<<"L ";
					else if ( gf[x].getType() == 2 ) giftfile<<"U ";
					giftfile<<gf[x].getPrice()<<" "<<gf[x].getValue()<<dt; 
				}
				break;
			}
			case 1 : {
				bi = b[j].getBudget();
				for ( l = 1 ; l < gfsize-1 ; l++ )
				{					
					if ( bi >= totprice )
					{
						totprice += gf[l].getPrice();
						totvalue += gf[l].getValue();
					}
					else
						break;
				}
				giftfile<<b[j].getName()<<" gifted "<<g[k].getName()<<"\n";
				for ( int x = 1 ; x <= l ; x++ )
				{
					now = time(0);
					string dt = ctime(&now);
					if ( gf[x].getType() == 0 ) giftfile<<"E ";
					else if ( gf[x].getType() == 1 ) giftfile<<"L ";
					else if ( gf[x].getType() == 2 ) giftfile<<"U ";
					giftfile<<gf[x].getPrice()<<" "<<gf[x].getValue()<<dt; 
				}
				break;
			}
			case 2 : {
				m = g[k].getMaintenance();
				for ( l = 1 ; l < gfsize-1 ; l++ )
				{					
					if ( m >= totprice )
					{
						totprice += gf[l].getPrice();
						totvalue += gf[l].getValue();
					}
					else
						break;
				}
				bh = g[k].getIntelligence();
				giftfile<<b[j].getName()<<" gifted "<<g[k].getName()<<"\n";
				for ( int x = 1 ; x <= l ; x++ )
				{
					now = time(0);
					string dt = ctime(&now);
					if ( gf[x].getType() == 0 ) giftfile<<"E ";
					else if ( gf[x].getType() == 1 ) giftfile<<"L ";
					else if ( gf[x].getType() == 2 ) giftfile<<"U ";
					giftfile<<gf[x].getPrice()<<" "<<gf[x].getValue()<<dt; 
				}
				break;
			}
		} 
		//cout<<bh<<"\n";
		switch ( gtype )
		{
			case 0 : {
				gh = log2( totprice - g[k].getMaintenance() );
				break;
			}
			case 1 : {
				gh = totprice + totvalue;
				break;
			}
			case 2 : {
				gh = totprice * log2(2);
				break;
			}
		}
		if ( bh == 0 )
			bh = gh;
		th = bh + gh;
		c[i].setHappiness(th);
		int compatible =( (b[j].getBudget() - g[k].getMaintenance()) + abs(b[j].getAttractiveness() - g[k].getAttractiveness()) + abs(b[j].getIntelligence() - g[k].getIntelligence() ) );
		c[i].setComp(compatible);
	}
	
	couple temp;
	for ( i=1 ; i<csize-1 ; i++ )
	{
		for ( j=i+1 ; j<csize-1 ; j++ )
		{
			if ( c[j].getHappiness() > c[i].getHappiness() )
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}	
		}
	}
	ofstream fout("ans1.txt");
	for ( i=1 ; i<=5 ; i++ )
	{
		now = time(0);
		string dt = ctime(&now);
					
		fout<<c[i].getGname()<<" and "<<c[i].getBname()<<" are committed with happiness = "<<c[i].getHappiness()<<" and compatible = "<<c[i].getComp()<<dt;
	}
	for ( i=1 ; i<csize-1 ; i++ )
	{
		for ( j=i+1 ; j<csize-1 ; j++ )
		{
			if ( c[j].getComp() > c[i].getComp() )
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}	
		}
	}
	ofstream fout2("ans2.txt");
	for ( i=1 ; i<=5 ; i++ )
	{
		now = time(0);
		string dt = ctime(&now);
					
		fout2<<c[i].getGname()<<" and "<<c[i].getBname()<<" are committed with happiness = "<<c[i].getHappiness()<<" and compatible = "<<c[i].getComp()<<dt;
	}
	
}



















