//피사노 주기를 이용한다
#include <stdio.h>
unsigned long long dp[1500000];

int main()
{
	unsigned long long n;
	scanf("%lld", &n);
	dp[0]=0;
	dp[1]=1;
	for(int i = 2; i<1500000; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= 1000000;
	}

	printf("%lld", dp[(n)%1500000]);

	return 0;
}