#include <stdio.h>


int main()
{

	long long n;
	scanf("%lld", &n);
	int j = 1;
	int sum = 0;
	int count =0;
	while(true)
	{
		sum = 5*j;
		if(sum > n)
			break;
		while(true)
		{
			if(sum%5 == 0)
			{
				sum /=5;
				count++;	
			}
			else
				break;
		}
		j++;
	}

	printf("%d", count);
	return 0;
}