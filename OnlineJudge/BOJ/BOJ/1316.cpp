#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	scanf("%d", &n);
	string *s = new string[n];
	bool check1 = false;
	bool check2 = false;
	
	for(int i=0; i<n; i++)
	{
		cin >> s[i];
	}

	int i = 0;
	int j = i+1;
		
	for(int k=0; k<n; k++)
	{
		i = 0;
		j = i+1;
		check1=false;
		check2=false;
		if(s[k].length()==1)
		{
			count++;
			continue;
		}
		while(true)
		{
			if(s[k].at(i)==s[k].at(j))
			{
				check1 = true;
			}
			else if(s[k].at(i)!=s[k].at(j))
			{
				check1 = false;
				check2 = true;
			}
			j++;

			if(check1 ==true && check2 == true)
				break;

			if(j==s[k].length())
			{
				i++;
				j=i+1;
				check1=false;
				check2=false;
				if(i == s[k].length()-1)
				{
					count++;
					break;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}