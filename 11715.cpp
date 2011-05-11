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
double s,v,u,a,t,d,b,c;
long int Case,i,j,n;
Case=1;
while(scanf("%ld",&n)==1)
{
	if(n==0)break;
	else if(n==1)
	{
		scanf("%lf %lf %lf",&u,&v,&t);
		a=(v-u)/t;
		s=u*t+(.5*a*t*t);
		printf("Case %ld: %.3lf %.3lf\n",Case,s,a);
	}
	else if(n==2)
	{
		scanf("%lf %lf %lf",&u,&v,&a);
		t=(v-u)/a;
		s=u*t+(.5*a*t*t);
		printf("Case %ld: %.3lf %.3lf\n",Case,s,t);
	}
	else if(n==3)
	{
		scanf("%lf %lf %lf",&u,&a,&s);
		v=sqrt(u*u+2*a*s);
		t=(v-u)/a;
		printf("Case %ld: %.3lf %.3lf\n",Case,v,t);
	}
	else
	{
		scanf("%lf %lf %lf",&v,&a,&s);
		u=sqrt(v*v-2*a*s);
		t=(v-u)/a;
		printf("Case %ld: %.3lf %.3lf\n",Case,u,t);
	}
Case++;
}
return 0;
}