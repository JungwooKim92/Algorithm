#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int *a = new int[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int i=0;
	int j=1;
	int count =0;
	while(true)
	{
		while(true)
		{
			if(a[i]==1)
				break;
			j++;
			if(a[i]==j)
			{
				count++;
				break;
			}
			if(a[i]%j ==0)
				break;

		}
		i++;
		j=1;
		if(i==n)
			break;
	}
	printf("%d", count);

	return 0;
}
	