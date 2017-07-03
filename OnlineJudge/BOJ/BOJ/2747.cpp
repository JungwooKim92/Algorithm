#include <stdio.h>

int dp[1000];

void Fibo(int n)
{
	if(n !=0 && n !=1)
	{
		int j=2;
		while(true)
		{
			dp[j] = dp[j-2] + dp[j-1];
			if(n==j)
				break;
			j++;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	dp[0]=0;
	dp[1]=1;
	Fibo(n);
	printf("%d", dp[n]);

	return 0;
}