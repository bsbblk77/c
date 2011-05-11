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

long int Full_Bottles(long int n){
   if(n <= 1){ 
      return 0;
   }
   if(n == 2){ 
      return 1;
   }
   return n/3 + Full_Bottles(n/3 + n%3);
}
int main()
{
   long int Empty_Bottles;
	while(scanf("%ld",&Empty_Bottles)!=EOF)
	{
		if(Empty_Bottles==0)break;
		printf("%ld\n",Full_Bottles(Empty_Bottles));
	}
   return 0;
}