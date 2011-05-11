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
		long int Case=1,Diagonal,N_Polygon;
		while(scanf("%ld",&Diagonal)!=EOF)
		{
			if(Diagonal==0)break;
			N_Polygon = ceil((3+sqrt(9+8*Diagonal))/2);
			printf("Case %ld: %ld\n",Case,N_Polygon);
			Case++;
		}
	return 0;
}