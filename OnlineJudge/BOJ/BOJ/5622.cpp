#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a;
	int i=0;
	int result;
	int sum=0;
	cin >>a;
	while(true)
	{
		result = (int)a.at(i) - 65;
		if(result>=22)
			sum+=10;
		else if(result>=19)
			sum+=9;
		else if(result>=15)
			sum+=8;
		else if(result>=12)
			sum+=7;
		else if(result>=9)
			sum+=6;
		else if(result>=6)
			sum+=5;
		else if(result>=3)
			sum+=4;
		else
			sum+=3;
		i++;
		if(i==a.length())
			break;
	}
	printf("%d", sum);
	return 0;
}