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
long int I,Binary[100],i,j,Count,Length;

while(scanf("%ld",&I)!=EOF)
{
	if(I<1) break;
	Length=1;
	Count=0;
	for(i=1;i<=100;i++)
	{
		Binary[i]=I%2;
		if(Binary[i]==1) Count++;
		I=I/2;
		if(I==0) break;
		Length++;
	}
	printf("The parity of ");
	for(j=Length;j>=1;j--)
	{
		printf("%ld",Binary[j]);
	}
	printf(" is %ld (mod 2).\n",Count);

}
return 0;
}