#include <stdio.h>

int main()
{
	int n;
	scanf("%d" ,&n);
	for(int j=0; j<n; j++)
	{
		for(int i=n-j; i>0; i--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}