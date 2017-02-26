#include <bits/stdc++.h>
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include "couple.h"
using namespace std;

#include "function2.h"
#include "variable.h"

int main ()
{
	readboys  ( b );
	readgirls ( g );
	readcouple(cp);
	readgift(gf);
	calc(cp,gf,b,g);
	return 0;
}
