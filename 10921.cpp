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
	char ch;
	while(scanf("%c",&ch)==1)
	{
		if (ch=='A'||ch=='B'||ch=='C') printf("2");
		else if (ch=='D'||ch=='E'||ch=='F') printf("3");
		else if (ch=='G'||ch=='H'||ch=='I') printf("4");
		else if (ch=='J'||ch=='K'||ch=='L') printf("5");
		else if (ch=='M'||ch=='N'||ch=='O') printf("6");
		else if (ch=='P'||ch=='Q'||ch=='R'||ch=='S') printf("7");
		else if (ch=='T'||ch=='U'||ch=='V') printf("8");
		else if (ch=='W'||ch=='X'||ch=='Y'||ch=='Z') printf("9");
		else printf("%c",ch);
	}
	return 0;
}