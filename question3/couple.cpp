#include "couple.h"
#include<string.h>

void couple :: setHappiness ( int h ) {
	happiness = h;
}
void couple :: setComp ( int c ) {
	comp = c;
}
void couple :: setGname ( char str[] ) {
	strcpy(gname,str);
}
void couple :: setBname ( char str[] ) {
	strcpy(bname,str);
}

int couple :: getHappiness ( ) {
	return happiness;
}
int couple :: getComp () {
	return comp;
}
char* couple :: getGname() {
	return gname;
}
char* couple :: getBname() {
	return bname;
}
