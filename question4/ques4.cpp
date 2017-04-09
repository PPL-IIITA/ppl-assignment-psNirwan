#include <bits/stdc++.h>
#include "boy.h"
#include "girl.h"
#include "gift.h"
#include "couple.h"
using namespace std;

#include "function4.h"
#include "function5.h"
#include "variable.h"

int main ()
{
	readboys  ( b );
	readgirls ( g );
	readcouple(cp);
	readgift(gf);
	breakup(cp,gf,b,g);
	makepair(b,g);
	return 0;
}
