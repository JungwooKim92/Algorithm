#include <stdio.h>

int main()
{
	int n,sum;
	scanf("%d", &n);
	sum = 0;
	for(int i=1; i <= n; i++)
	{
		if(i/10 >=10)
		{
			if((i/10)%10 - i%10 == i/100 - (i/10)%10)
				sum+=1;
		}
		else if(i/10>=1)
		{
			sum+=1;
		}
		else
		{
			sum +=1;
		}
	}
	printf("%d\n", sum);
	return 0;
		

}