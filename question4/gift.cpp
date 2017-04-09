#include "gift.h"

void gift :: setPrice ( int p ) {
	price = p;
}
void gift :: setValue ( int v ) {
	value = v;
}
void gift :: setType ( int t ) {
	type = t;
}

int gift :: getPrice () {
	return price;
}
int gift :: getValue() {
	return value;
}
int gift :: getType() {
	return type;
}
