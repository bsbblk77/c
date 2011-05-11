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
		long int N,Sum;
		while(scanf("%ld",&N)!=EOF)
		{
			if(N==0)break;
again:
			Sum = 0;
			while (N!=0) 
				{
			Sum += (N % 10);
			N/=10;
				}
			if (Sum/10==0)
				printf("%ld\n", Sum);
			else 
			{
				N = Sum;
				goto again;
			}
		}
		return 0;
}