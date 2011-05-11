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
		long double Mean,Count,MeanCount,Sum;
		long int TestCase,N,i,j,k,Student[1000];
		while(scanf("%ld",&TestCase)==1)
		{
			for(i=1;i<=TestCase;i++)
			{
				Sum = 0 ;
				Count = 0;
				MeanCount = 0;
				Mean = 0 ;
				scanf("%ld",&N);
				for(j=1;j<=N;j++)
				{
				scanf("%ld",&Student[j]);
				Sum+=Student[j];
				}
				Mean = Sum/N;
				for(k=1;k<=N;k++)
				{
				if(Student[k]>Mean) Count++;
				}
				MeanCount = (Count/N)*100;
				printf("%.3Lf%c\n",MeanCount,37);
			}		
		}
		return 0;
}