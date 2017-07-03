#include <stdio.h>

int main()
{
	
	int n;
	scanf("%d", &n);
	unsigned int *x= new unsigned int[n];
	unsigned int *y= new unsigned int[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}

	for(int i=0; i<n; i++)
	{
		if(x[i]==0)
			printf("%d\n",y[i]-x[i]);
		else
			printf("%d\n",y[i]-x[i]-1);
	}
	

	return 0;
}