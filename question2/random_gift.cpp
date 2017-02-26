#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(NULL));
	ofstream fout("gift.dat");
	for ( int i=1 ; i<=69 ; i++ ) {
		fout<<rand()%100<<"\n";
		fout<<rand()%100<<"\n";
		fout<<rand()%3<<"\n";
	}
	fout<<rand()%100<<"\n";
	fout<<rand()%100<<"\n";
	fout<<rand()%3;
}
