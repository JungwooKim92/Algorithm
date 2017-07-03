#include <stdio.h>

unsigned long long nk[1001][1001];

unsigned long long aa(unsigned long long n, unsigned long long k)
{
	if(nk[n][k] == 0)
	{
		if(n == 0 || k==0)
			nk[n][k] = 1;
		else
			nk[n][k] = (aa(n,k-1) % 10007 + aa(n-1,k) % 10007)%10007;
	}
	else
		return nk[n][k];

	return nk[n][k];
}


int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	aa(n-k,k);
	printf("%lld", nk[n-k][k]);
	return 0;

}