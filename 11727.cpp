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
		long int TestCase,i,a,b,c,ans;
		while(scanf("%ld",&TestCase)==1)
		{
			for(i=1;i<=TestCase;i++)
			{
					scanf("%ld%ld%ld",&a,&b,&c);
					if(b>a&&b<c)ans=b;
					else if(c>a&&c<b)ans=c;
					else if(a>b&&a<c)ans=a;
					else if(a<b&&a>c)ans=a;
					else if(c<a&&c>b)ans=c;
					else if(b<a&&b>c)ans=b;
					printf("Case %ld: %ld\n",i,ans);
			}	
				ans = 0;
		}
	return 0;
}