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
		long int Test,x,y;
		while(scanf("%ld",&Test)!=EOF)
		{
			for(int i=1;i<=Test;i++)
			{
				scanf("%ld",&x);
				y = (((((((x*567)/9)+7492)*235)/47)-498)/10)%10;
				if(y<0) y=y*(-1);
				printf("%ld\n",y);
			}	
		}
		return 0;
}