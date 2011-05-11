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
		long int Test,Num[1000],count,i,j;
		while(scanf("%ld",&Test)!=EOF)
		{
			for(i=1;i<=Test;i++)
			{
				scanf("%ld",&Num[i]);
			}
				count=0;
				for(i=1;i<Test;i++)
					{
					for(j=1;j<Test;j++)
						{
							if((Num[j+1]<Num[j])&&(j+1!=Test+1))
							{
								swap (Num[j],Num[j+1]);
								count++;
							}
						}
					}
			printf("Minimum exchange operations : %ld\n",count);
		}
	return 0;
}