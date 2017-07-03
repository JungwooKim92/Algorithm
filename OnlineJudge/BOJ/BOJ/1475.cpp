#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int b[9];
int main()
{
	string a;
	cin >>a;
	int i =0;
	while(true)
	{
		if(a.at(i)-48==6)
			b[a.at(i)-48+2]++;
		else if(a.at(i)-48 == 7 || a.at(i)-48 == 8 ||a.at(i)-48 == 9)
			b[a.at(i)-48-1]++;
		else
			b[a.at(i)-48]++;
		i++;
		if(i==a.length())
			break;
	}
	sort(b,b+8);
	if(b[7] > b[8]/2)
		printf("%d",b[7]);
	else
	{
		if(b[8]%2==1)
			b[8]=b[8]+1;
		printf("%d", b[8]/2);
	}

	return 0;
}