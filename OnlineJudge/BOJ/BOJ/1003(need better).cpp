#include <stdio.h>

int dp[1000];
int count00 = 0;
int count11 = 0;

int Fibo(int n)
{
	if(n==0)
	{
		count00++;
		return 0;
	}
	else if(n==1)
	{
		count11++;
		return 1;
	}
	else
		return Fibo(n-1) + Fibo(n-2);
}

int main()
{
	int n;
	int count;
	scanf("%d", &count);
	int *count0 = new int[count];
	int *count1 = new int[count];
	for(int i=0; i<count; i++)
	{
		scanf("%d", &n);
		Fibo(n);
		count0[i]=count00;
		count1[i]=count11;
		count00=0;
		count11=0;
	}
	for(int i=0; i<count; i++)
	{
		printf("%d %d\n", count0[i], count1[i]);
	}
	return 0;
}