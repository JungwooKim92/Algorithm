#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	int *m = new int[c];
	int *n = new int[c];
	int *x = new int[c];
	int *y = new int[c];
	for(int i=0; i<c; i++)
	{
		scanf("%d %d %d %d",&m[i], &n[i] ,&x[i],&y[i]);
	}

	for(int i=0; i<c;i++)
	{
		while(true)
		{
			if(m[i]<x[i])
				x[i]=1;
			else
				x[i]+=1;
			if(n[i]<y[i])
				y[i]=1;
			else
				y[i]+=1;
		}
	}


	return 0;
}