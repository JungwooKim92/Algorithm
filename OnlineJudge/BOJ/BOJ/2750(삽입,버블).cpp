#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int temp;
	scanf("%d", &n);
	int *b = new int[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d\n", b[i]);
	}

	return 0;
}