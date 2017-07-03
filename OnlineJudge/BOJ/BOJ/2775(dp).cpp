#include <stdio.h>

int main()
{
	int nn;
	scanf("%d", &nn);
	int *k = new int[nn];
	int *n = new int[nn];
	
	for(int i=0; i<nn; i++)
	{
		scanf("%d\n %d", &k[i], &n[i]);
	}


}