#include "boy.h"
#include<string.h>

void boy :: setName ( char str[] ) { 
	strcpy(name,str);
}
void boy :: setAttractiveness ( int a ) {
	 attractiveness = a;
}
void boy :: setIntelligence ( int i ) {
	 intelligence = i;
}
void boy :: setBudget ( int b ) {
	 budget = b;
}
void boy :: setCommitted ( int x ) {
	 committed = x;
}
void boy :: setMinattr ( int m ) {
	 minattr = m;
}
void boy :: setType ( int t ) {
	type = t;
}

char* boy :: getName () {
	return  name;
}
int boy :: getAttractiveness () {
	return  attractiveness;
}
int boy :: getIntelligence () {
	return  intelligence;
}
int boy :: getBudget () {
	return  budget;
}
int boy :: getMinattr () {
	return  minattr;
}
int boy :: isCommitted () {
	return  committed;
}
int boy :: getType () {
	return type;
}


