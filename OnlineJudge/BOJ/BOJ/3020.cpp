//슬라이딩 윈도우 기법입니다

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int n,k;
	scanf("%d %d", &n, &k);
	
	int *a = new int[n];
	int *b = new int[k+1];
	int *c = new int[k+1];
	for(int i=0; i<k+1; i++)
	{
		b[i] = 0;
		c[i] = 0;
	}
	b[0] = n/2;
	c[k] = n/2;
	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			scanf("%d", &a[i]);
			c[a[i]]++;
		}
		else
		{
			scanf("%d", &a[i]);
			b[k - a[i]]++;
		}
	}
	
	int sum = 0;
	int temp = b[0];
	int count = 0;
	for(int i = 0; i<k; i++)
	{	
		sum += b[i];
		sum-= c[i];
		if(temp > sum)
		{
			temp = sum;
			count = 1;
		}
		else if(temp == sum)
		{
			count++;
		}
		
	}

	/*if(temp == c[k])
		count++;
*/
	printf("%d %d", temp, count);

	return 0;
}