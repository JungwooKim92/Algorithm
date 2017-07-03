#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	string a;
	int *aa = new int[n];
	int temp;
	int *result = new int[n];
	
	int i=0;
	int f=0;
	int b=0;
	int r=0;
	for (int i=0; i<n; i++)
	{
		aa[i]=-1;
	}
	while(i!=n)
	{
		cin >> a;
		if(a.find("push")==0)
		{
			scanf("%d", &temp);
			aa[f]=temp;
			f++;
		}
		else if(a.find("pop")==0)
		{
			result[r]=aa[b];
			r++;
			aa[b]=-1;
			b++;
			if(b>f)
				b-=1;
		}
		else if(a.find("front")==0)
		{
			if(b==0)
			{
				result[r]=aa[b];
				r++;
			}
			else if(aa[b] != -1)
			{
				result[r]=aa[b];
				r++;
			}
			else
			{
				result[r]=-1;
				r++;
			}
		}
		else if(a.find("back")==0)
		{
			if(f==0)
			{
				result[r]=aa[f];
				r++;
			}
			else if(aa[f-1] != -1)
			{
				result[r]= aa[f-1];
				r++;
			}
			else
			{
				result[r] =-1;
				r++;
			}
		}
		else if(a.find("size")==0)
		{
			result[r]= f-b;
			r++;
		}
		else if(a.find("empty")==0)
		{
			if(f-b==0)
			{
				result[r]=1;
				r++;
			}
			else
			{
				result[r]=0;
				r++;
			}
		}
		i++;
	}

	for(int i=0; i<r; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
	
}