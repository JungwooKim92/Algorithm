#include <stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	long long sum=1;
	for(int i=1; i<=n; i++)
	{
		sum*=i;
	}
	printf("%lld", sum);
	return 0;
}