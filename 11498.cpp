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
	long int N,M,X,Y,K,i;
	while(scanf("%ld",&K)==1)
		{
			if(K==0)break;
			scanf("%ld%ld",&N,&M);
			for(i=1;i<=K;i++)
				{
					scanf("%ld%ld",&X,&Y);
					if(X==N||Y==M)printf("divisa\n");
					else if(X>N&&Y>M) printf("NE\n");
					else if(X<N&&Y>M)printf("NO\n");
					else if(X<N&&Y<M) printf("SO\n");
					else printf("SE\n");
				}
		}
	return 0;
}