#include "girl.h"
#include<string.h>

void girl :: setName ( char str[] ) { 
	 strcpy(name,str);
}
void girl :: setAttractiveness ( int a ) {
	 attractiveness = a;
}
void girl :: setIntelligence ( int i ) {
	 intelligence = i;
}
void girl :: setMaintenance ( int m ) {
	 maintenance = m;
}
void girl :: setCommitted ( int x ) {
	 committed = x;
}
void girl :: setCriteria ( int c ) {
	 criteria = c;
}
void girl :: setType ( int t ) {
	type = t;
}

char* girl :: getName () {
	return  name;
}
int girl :: getAttractiveness () {
	return  attractiveness;
}
int girl :: getIntelligence () {
	return  intelligence;
}
int girl :: getMaintenance () {
	return  maintenance;
}
int girl :: isCommitted() {
	return  committed;
}
int girl :: getCriteria ( ) {
	return  criteria;
}
int girl :: getType ( ) {
	return type;
}

