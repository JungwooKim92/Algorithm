#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int L[7][8];

int lcs(char *x, char *y, int m, int n);

int main()
{
	char x[] = "AGGTAB";
	char y[] = "GXTXAYB";

	int m = strlen(x);
	int n = strlen(y);

	int ans = lcs(x, y, m, n);
	printf("%d\n", ans);
	
	printf("\n");
	for (int i = 0; i <= m+1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			printf("%d ", L[j][i]);
		}
		printf("\n");
	}
	return 0;
}

int lcs(char *x, char *y, int m, int n)
{
	//int L[m + 1][n + 1];
	int i, j;
	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (x[i - 1] == y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
	return L[m][n];
}