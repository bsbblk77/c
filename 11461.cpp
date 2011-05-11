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
	long int SqrtNum1,SqrtNum2,PowCheck,SqrtNumCount,i,j,Num1,Num2;
	while(scanf("%ld%ld",&Num1,&Num2)==2)
		{
		if(Num2<Num1) {swap (Num1,Num2);}
		if(Num1==0 &&Num2==0)break;
		SqrtNumCount=0;
		SqrtNum1=sqrt(Num1);
		SqrtNum2=sqrt(Num2);
			for(i=SqrtNum1;i<=SqrtNum2;i++)
			{	
				PowCheck = pow(i,2);
				if(PowCheck>=Num1&&PowCheck<=Num2)
				{
				SqrtNumCount++;
				}
				if (PowCheck>Num2)break;
			}
	printf("%ld\n",SqrtNumCount);
		}
	return 0;
}