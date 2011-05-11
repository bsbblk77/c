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
		long int N,Dimension,Middle,Difference,Row,Column;
		
		while (scanf("%ld",&N)!=EOF)
		{
			if(N<=0)break;
			
			Dimension = ceil(sqrtf(N));
			Row=Dimension;
			Column=Dimension;
			Middle=(pow(Dimension,2))-Dimension+1;
	
			if(N>Middle)Difference=N-Middle;
			else Difference = Middle-N;
			
			if(N>Middle)Row = Row - Difference;
         else Column = Column - Difference;
         
			if(Dimension%2==0)
			{			
			printf("%ld %ld\n",Column,Row);
		   }
         else 
         {
         swap (Column,Row);
         printf("%ld %ld\n",Column,Row);
			}
		}
		return 0;
}
