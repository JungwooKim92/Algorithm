#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d\n",&n);
	string a;
	int *s = new int[n];
	int count = 0;
	int result = 0;
	int j=0;
	for(int i = 1; i<=n; i++)
	{
		getline(cin,a);
		while(true)
		{
			if(a.at(j)== 'O')
			{
				count++;
				result += count;
			}
			else if(a.at(j)=='X')
			{
				count = 0;
			}
			j++;
			if(j == a.length())
				break;
		}
		s[i-1] = result;
		count =0;
		result = 0;
		j=0;
	}
	for(int i=0; i <n; i++)
	{
		printf("%d\n", s[i]);
	}

	return 0;
}