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
		int TestCase,i,j,A,B;
		while(scanf("%d",&TestCase)==1)
		{
			for(i=1;i<=TestCase;i++)
			{
			scanf("%d%d",&A,&B);
				if(B<A)
				{
					swap(A,B);
				}
					int Sum=0;
					for(j=A;j<=B;j++)
					{
						if(j%2==1)Sum += j;		
					}
					printf("Case %d: %d\n",i,Sum);			
			}	
		}
	return 0;
}