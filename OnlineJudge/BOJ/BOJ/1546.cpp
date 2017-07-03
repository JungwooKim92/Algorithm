#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	int *a = new int[n];
	for(int i =0 ; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	sort(a,a+n);
	int max = a[n-1];
	float sumav=0;
	for(int i=0; i<n; i++)
	{
		sumav+=a[i];
	}
	sumav =  (sumav * 100) / (max*n);
	sumav *=1000;
	int re = (int)sumav % 10;
	if(re<5)
	{
		sumav = sumav/1000;
	}
	else
	{
		sumav = (sumav+1)/1000;
	}
	printf("%.2f\n", sumav);
	return 0;
}
