#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
	int count;
	scanf("%d", &count);
	int *dq = new int[count];
	int num;
	int f=count/2;
	int b=(count/2)-1;
	int *result = new int[count];
	int r=0;
	for(int i=0; i<count; i++)
	{
		dq[i]=-1;
	}

	for(int i=0; i<count; i++)
	{
		cin>>s;
		if(s.find("push_front")==0)
		{
			scanf("%d", &num);
			/*if(dq[f]!=-1)
				f++;*/
			dq[f]=num;
			f++;
		}
		else if(s.find("push_back")==0)
		{
			scanf("%d", &num);
			/*if(dq[b]!=-1)
				b--;*/
			dq[b]=num;
			b--;
		}
		else if(s.find("pop_front")==0)
		{
			f--;
			if(f==b)
			{
				f+=1;
				result[r]=-1;
				r++;
			}
			else
			{
				result[r]=dq[f];
				r++;
			}
			dq[f]=-1;
		}
		else if(s.find("pop_back")==0)
		{
			b++;
			if(f==b)
			{
				b-=1;
				result[r]=-1;
				r++;
			}
			else
			{
				result[r]=dq[b];
				r++;
			}
			dq[b]=-1;
		}
		else if(s.find("size")==0)
		{
			result[r]=f-b-1;
			r++;
		}
		else if(s.find("empty")==0)
		{
			if(f-b==1)
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
		else if(s.find("front")==0)
		{
			result[r]=dq[f-1];
			r++;
		}
		else if(s.find("back")==0)
		{
			result[r]=dq[b+1];
			r++;
		}

	}

	for(int i=0; i<r; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}