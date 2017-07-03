#include <stdio.h>

int a[1000001];

int main()
{

	int i=1;
	int j=2;
	while(true)
	{
		a[j+j*i]=1;
		i++;

		if(j==1000000)
			break;
		if(j+j*i>1000001)
		{
			j++;
			i=1;
			if(j+j*i>1000001)
				break;
		}
		
	}
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if(n1==1 && n2==1)
		return 0;
	if(n1==1)
		n1++;
	for(int i=n1; i<=n2; i++)
	{
		if(a[i]==0)
			printf("%d\n",i);
	}

	return 0;
}
	