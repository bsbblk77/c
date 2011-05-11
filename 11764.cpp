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
	long int T,i,j,HighJump,LowJump,N,Wall[100];
		while(scanf("%ld",&T)!=EOF)
		{
			for(i=1;i<=T;i++)
			{
			scanf("%ld",&N);
			HighJump=LowJump=0;
			for(j=1;j<=N;j++)scanf("%ld",&Wall[j]);
			for(j=1;j<N;j++)
				{
				if(Wall[j+1]>Wall[j])HighJump++;
				if(Wall[j+1]<Wall[j])LowJump++;
				}
			printf("Case %ld: %ld %ld\n",i,HighJump,LowJump);
			}
		}
return 0;
}