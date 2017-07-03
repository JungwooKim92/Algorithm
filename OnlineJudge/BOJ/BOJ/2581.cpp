#include <stdio.h>

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int *a = new int[n2-n1+1];
	int *b = new int[n2-n1+1];
	int k=0;
	
	for(int i=0; i<n2-n1+1; i++)
	{
		a[i] = n1+i;
	}
	int i=0;
	int j=1;
	int sum=0;
	while(true)
	{
		while(true)
		{
			if(a[i]==1)
				break;
			j++;
			if(a[i]==j)
			{
				b[k]=a[i];
				k++;
				sum+=a[i];
				break;
			}
			if(a[i]%j ==0)
				break;

		}
		i++;
		j=1;
		if(i==n2-n1+1)
			break;
	}
	if(k==0)
		printf("-1");
	else
		printf("%d\n%d\n",sum,b[0]);

	return 0;
}
	