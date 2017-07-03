#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int x1 = 64;
	int x2 = 0;
	int count = 0;
	int sum=0;
	while(true)
	{
		if(x1 > n )
			x1/=2;
		else
		{
			if(x1 == n)
			{
				count++;
				break;
			}
			if(x1 == 1)
				break;
			sum += x1;
			count++;
			if(sum == n)
				break;
			
			x1 /=2;
		}
			
	}

	printf("%d", count);
	return 0;
}