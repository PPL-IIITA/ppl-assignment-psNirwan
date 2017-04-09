#include<bits/stdc++.h>
using namespace std;
#include "boy.h"
#include "girl.h"

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

void makepairq5 ( boy b[] , girl g[] )
{
	time_t now;	
	int pos;
	int i,j,MaxA,MaxB,MaxI;
	freopen ( "couple3.txt" , "w" , stdout );
	for ( i=1 ; i < gsize + bsize ; i++ )
	{
		if ( i % 2 == 1 ) 
		{
			MaxA = 0;
			for ( j = 1 ; j < gsize-1 ; j++ ) 
			{
				if( g[j].isCommitted() == 0 && g[j].getAttractiveness() > MaxA )
				{
					pos = j;
					MaxA = g[j].getAttractiveness();
				}
			}
			if ( g[pos].isCommitted() == 0 ) 
			{
				g[pos].setCommitted(1);
				b[i].setCommitted(1);
				now = time(0);
				string dt = ctime(&now);
				cout<<g[pos].getName()<<" and "<<b[i].getName()<<" are committed "<<dt;
			}
		}
		else
		{
			MaxA = 0;	MaxB = 0;	MaxI = 0;
			int cr = g[i].getCriteria();
			switch ( cr )
			{
				case 0 : {
						 for ( j = 1 ; j < bsize-1 ; j++ ) {
							 if( b[j].isCommitted() == 0 && b[j].getAttractiveness() > MaxA )
							 {
								 pos = j;
								 MaxA = b[j].getAttractiveness();
							 }
						 }
						 if ( b[pos].getBudget() >= g[i].getMaintenance() && b[pos].getMinattr() <= g[i].getAttractiveness() && b[pos].isCommitted() == 0 )
						 {
							 g[i].setCommitted(1);
							 b[pos].setCommitted(1);
							 now = time(0);
							 string dt = ctime(&now);
							 cout<<g[i].getName()<<" and "<<b[pos].getName()<<" are committed "<<dt;
							 break;
						 }
						 break;
					 }

				case 1 : {
						 for ( j = 1 ; j < bsize-1 ; j++ ) {
							 if( b[j].isCommitted() == 0 && b[j].getBudget() > MaxB )
							 {
								 pos = j;
								 MaxB = b[j].getBudget();
							 }
						 }
						 if ( b[pos].getBudget() >= g[i].getMaintenance() && b[pos].getMinattr() <= g[i].getAttractiveness() && b[pos].isCommitted() == 0 )
						 {
							 g[i].setCommitted(1);
							 b[pos].setCommitted(1);
							 now = time(0);
							 string dt = ctime(&now);
							 cout<<g[i].getName()<<" and "<<b[pos].getName()<<" are committed "<<dt;
							 break;
						 }
						 break;			
					 }

				case 2 : {
						 for ( j = 1 ; j < bsize-1 ; j++ ) {
							 if( b[j].isCommitted() == 0 && b[j].getIntelligence() > MaxI )
							 {
								 pos = j;
								 MaxI = b[j].getIntelligence();
							 }
						 }
						 if ( b[pos].getBudget() >= g[i].getMaintenance() && b[pos].getMinattr() <= g[i].getAttractiveness() && b[pos].isCommitted() == 0 )
						 {
							 g[i].setCommitted(1);
							 b[pos].setCommitted(1);
							 now = time(0);
							 string dt = ctime(&now);					
							 cout<<g[i].getName()<<" and "<<b[pos].getName()<<" are committed "<<dt;
							 break;
						 }
					 }

			}
		}
	}
}
