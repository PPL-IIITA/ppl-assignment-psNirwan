#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	ofstream fout("girl.dat");
	char s[20];
	for ( int i=1 ; i<=39 ; i++ ) {
		for ( int j=0 ; j<5 ; j++ )
			s[j] = 97 + ( rand()%26 );
		fout<<s<<"\n";
		fout<<rand()%20<<"\n";
		fout<<rand()%1000<<"\n";
		fout<<rand()%20<<"\n";
		fout<<rand()%3<<"\n";
		fout<<0<<"\n";
		fout<<rand()%3<<"\n";
	}
	for ( int j=0 ; j<5 ; j++ )
		s[j] = 97 + ( rand()%26 );
	fout<<s<<"\n";
	fout<<rand()%20<<"\n";
	fout<<rand()%1000<<"\n";
	fout<<rand()%20<<"\n";
	fout<<rand()%3<<"\n";
	fout<<0<<"\n";
	fout<<rand()%3;
}
