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
	int Num,Case=1,i,Ans;
		while(scanf("%d",&Num)!=EOF)
		{
			if(Num<0) break;
			for(i=0;;i++)
			{
				if(pow(2,i)>=Num)
				{
					Ans=i;
					break;
				}
			}
			printf("Case %d: %d\n",Case,Ans);
			Case++;
		}
	return 0;
}