#include <stdio.h>

int main()
{
	int n,sum,result,count=0;
	scanf("%d", &n);
	result = n;
	while(true)
	{
		sum=0;
		if(n<0)
		{
			n = n;
		}
		else
		{
			sum = n%10 + n/10;
			n = n%10 * 10 + sum%10;
		}
		count ++;
		if(n==result)
			break;
	}
	printf("%d\n", count);

}