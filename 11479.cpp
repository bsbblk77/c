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
int main()
{
	long int TestCase,max,a,b,c;
		while(scanf("%ld",&TestCase)==1)
		{
			for(int i=1;i<=TestCase;i++)
			{
				scanf("%ld%ld%ld",&a,&b,&c);
				max = 0;
				if(a>max)max=a;
				if(b>max)max=b;
				if(c>max)max=c;
				if (a+b+c-max<=max)
				{
					printf("Case %ld: %s\n",i,"Invalid");
				}
				else if(a==b && a==c && b==c)
				{
					printf("Case %ld: %s\n",i,"Equilateral");	
				}
				else if(a==b || a==c || b==c)
				{
					printf("Case %ld: %s\n",i,"Isosceles");
				}
				else if(a != b && a != c && b != c)
				{
					printf("Case %ld: %s\n",i,"Scalene");
				}	
			}
		}
	return 0;
}