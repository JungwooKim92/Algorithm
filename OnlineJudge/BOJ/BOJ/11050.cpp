#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	float sum1=1,sum2=1;
	for(int i=n; i>n-k; i--)
	{
		sum1*=i;
	}

	for(int i=1; i<=k; i++)
	{
		sum2*=i;
	}

	printf("%.f", sum1/sum2);

	return 0;

}