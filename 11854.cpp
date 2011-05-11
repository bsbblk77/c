#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
#include <string>
using namespace std;
int main()
{
   long int A,B,C,Check,Max,X,Y;
	while(scanf("%ld%ld%ld",&A,&B,&C)==3)
	{
		if(A>B&&A>C)Max=A,X=B,Y=C;
		if(B>A&&B>C)Max=B,X=A,Y=C;
		if(C>A&&C>B)Max=C,X=A,Y=B;
		if(A==0 && B==0 && C==0)break;
		Check = sqrt((X*X)+(Y*Y));
		if(Max==Check)
		{printf("right\n");}
		else if(Max!=Check)
		{printf("wrong\n");}
		Check = 0 ;
	}
   return 0;
}