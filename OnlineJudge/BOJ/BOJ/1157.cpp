#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int b[26];
	
int main()
{
	string a;
	//memset(b,0,sizeof(int)*26);
	int c[26];
	cin >> a;
	int i = 0;
	int k = 0;
	//a97 ~ 122 A65 ~ 90
	while(true)
	{	
		k=(int)a.at(i);
		if(k>=97)
			k-=97;
		else
			k-=65;
		b[k]++;
		i++;
		if(i==a.length())
			break;
	}

	for(int i=0; i<26; i++)
	{
		c[i] = b[i];

	}

	sort(b, b+26);
	
	if(b[25] == b[24])
		printf("?\n");
	else
	{
		i=0;
		while(true)
		{
			if(c[i] == b[25])
				break;
			i++;
		}
		printf("%c",i+65);
	}
			
	

	return 0;
}