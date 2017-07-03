#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int dp[1000001];

int result(int x)
{
	
	if(dp[x]==0)
	{
		if(x == 1)
			return dp[x];
		if(x % 2 == 0 && x % 3 == 0)
		{
			return dp[x] = 1 + min(result(x/2),result(x/3));
		}
		else if(x %2 == 0)
		{
			return dp[x] = 1 + min(result(x/2),result(x-1));
		}
		else if(x % 3 == 0)
		{
			return dp[x] = 1 + min(result(x/3),result(x-1));
		}
		else
		{
			return dp[x] = 1 + result(x-1);
		} 
	}
	else
		return dp[x];
}

int main()
{
	int x;
	scanf("%d", &x);
	int temp = result(x);
	printf("%d", temp);
	return 0;
}