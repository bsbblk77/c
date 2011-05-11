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
long int i,N,Pieces=2;
while(scanf("%ld",&N)!=EOF){
if(N<0) break;
Pieces = (N*(N+1)/2);
printf("%ld\n",Pieces+1);
}
return 0;
}