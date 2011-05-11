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
long int Dif,Y,X;

while(scanf("%ld%ld",&X,&Y)!=EOF){
if(X>Y) Dif=X-Y;
else Dif=Y-X;
printf("%ld\n",Dif);
}
return 0;
}