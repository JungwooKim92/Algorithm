#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	int n;
	char *stack = new char[100];
	scanf("%d", &n);
	string *a = new string[n];
	string *result = new string[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int i=0;
	int j=0;
	int k=0;

	while(true)
	{

		if(a[i].at(j)==')')
		{
			while(true)
			{ 
				k--;
				if(k<0)
				{
					result[i]="NO";
					for(int i=0; i<100; i++)
					{
						stack[i]='\0';
					}
					i++;
					j=0;
					k=0;
					break;
				}

				if(stack[k]=='(')
				{
					stack[k]='\0';
					j++;
					break;
				}
				else
				{
					stack[k]='\0';	
				}
			}
			
		}
		else
		{
			stack[k] = a[i].at(j);
			k++;
			j++;
		}

		if(j == a[i].length())
		{
			if(stack[0] != '\0')
				result[i]="NO";
			else
				result[i]="YES";

			for(int i=0; i<100; i++)
			{
				stack[i]='\0';
			}
			k=0;
			j=0;
			i++;
		}

		if(i==n)
			break;
	}

	for(int i=0; i<n; i++)
	{
		cout << result[i]<<endl;
	}
	return 0;
}