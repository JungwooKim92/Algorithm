#include <stdio.h>

unsigned long long aa(unsigned long long n, unsigned long long k)
{
	if(n == 0 || k==0)
			return 1;
	else
			return (aa(n,k-1) % 1000000007 + aa(n-1,k) % 1000000007)%1000000007;
}


int main()
{

	int n, k;
	scanf("%d %d", &n, &k);
	
	/*unsigned long long **nk = new unsigned long long*[n+1];
	
	for(int i=0; i<n; i++)
	{
		nk[i] = new unsigned long long[n+1];
	}*/

	//aa(n-k,k);
	printf("%lld", aa(n-k,k));
	return 0;
}