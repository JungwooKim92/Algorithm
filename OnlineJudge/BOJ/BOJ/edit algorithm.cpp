#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int dp[8][8];

int editDistDP(string str1, string str2, int m, int n)
{
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (str1[i - 1] == str2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
		}
	}
	return dp[m][n];
}
int main()
{
	string a = "writers";
	string b = "vintner";
	int m = a.length();
	int n = b.length();
	int ans = editDistDP(a, b, m, n);
	printf("%d\n", ans);
	return 0;
}