#include <stdio.h>
#include <malloc.h>
int a[1000001];

int main()
{

	int i=1;
	int j=2;
	a[1]=1;
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
	int s=10;
	int *n1 = new int[s];
	int count = 0;
	int k=0;
	int *result = new int[s];
	
	while(true)
	{
		scanf("%d", &n1[k]);
		if(n1[k]==0)
			break;
		for(int i=n1[k]+1; i<=n1[k]*2; i++)
		{
			if(a[i]==0)
				count++;
		}
		result[k] = count;
		k++;
		count =0;
		if(k==s)
		{
			s=s*2;
			n1=(int *)realloc(n1, s*sizeof(int));
			result = (int*)realloc(result, s*sizeof(int));
		}

	}

	for(int i=0; i<k; i++)
	{
		printf("%d\n",result[i]);
	}


	return 0;
}
	