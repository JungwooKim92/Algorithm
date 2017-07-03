#include <stdio.h>
#include <string>
#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
	int count;
	scanf("%d", &count);
	string a;
	int b;
	int k=-1;
	int size=0;
	int t=0;
	int *stack= new int[size];
	int *result = new int[count];
	for(int i=0; i<count; i++)
	{
		cin >> a;
		if(a.find("push")==0)
		{
			if(k==size-1)
			{
				stack = (int*)realloc(stack,(size+1)*sizeof(int));
				size++;
			}
			cin>>b;
			k++;
			stack[k]=b;
			
		}
		else if(a.find("top")==0)
		{
			if(k==-1)
			{
				result[t]=-1;
				t++;
			}
			else
			{
				result[t]=stack[k];
				t++;
			}
		}
		else if(a.find("size")==0)
		{
			result[t]=size;
			t++;
		}
		else if(a.find("pop")==0)
		{
			if(k==-1)
			{
				result[t]=-1;
				t++;
			}
			else
			{
				result[t]=stack[k];
				t++;
				stack[k]=NULL;
				k--;
				size--;
				stack = (int*)realloc(stack,(size)*sizeof(int));
			}
			
		}
		else if(a.find("empty")==0)
		{
			if(k==-1)
			{
				result[t]=1;
				t++;
			}
			else
			{
				result[t]=0;
				t++;
			}
		}

	}
	for(int i=0; i<t; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
