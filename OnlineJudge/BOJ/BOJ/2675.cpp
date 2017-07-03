#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int count;
	scanf("%d", &count);
	int *n = new int[count];
	string *s = new string[count];
	
	for(int i=0; i<count; i++)
	{
		scanf("%d", &n[i]);
		cin>> s[i];
	}
	int j=0,k=0;
	while(true)
	{
		while(true)
		{
			for(int i=0; i<n[j]; i++)
			{
				printf("%c",s[j].at(k));
			}
			k++;
			if(k == s[j].length())
				break;
		}
		j++;
		k=0;
		printf("\n");
		if(j == count)
			break;
	}


	

	return 0;
	
}