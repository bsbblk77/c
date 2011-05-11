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
		long int M,N,Ans;
		while(scanf("%ld%ld",&M,&N)!=EOF)
		{
			Ans = (M*N)-1 ;
			printf("%ld\n", Ans);
		}
		return 0;
}