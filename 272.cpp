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
int main()
{
    char ch;
    long int a=0;
    while(scanf("%c",&ch)==1)
    {
    	if(ch=='"') 
    	{
    	a++;
    		if(a%2==1) 
    		{printf("``");}
    		else if (a%2==0) 
    		{printf("''");}
    	}
    	else printf("%c",ch);
    }
    return 0;
}
