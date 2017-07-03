#include <stdio.h>
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
	int count;
	scanf("%d", &count);
	int *n= new int[count];
	int *result1 = new int[count];
	int *result2 = new int[count];
	int p,q;
	int o=1;

	for(int i=0; i<count; i++)
	{
		scanf("%d", &n[i]);
		n[i]=n[i]/2;
		if(a[n[i]]==0)
		{
			result1[i]= n[i];
			result2[i]= n[i];
			continue;
		}
		while(true)
		{
			
			p=n[i]-o;
			q=n[i]+o;
			if(a[p]==0 && a[q]==0)
			{
				result1[i]=p;
				result2[i]=q;
				break;
			}
			else
				o++;
		}
		o=0;
	}
	for(int i=0; i<count; i++)
	{
		printf("%d %d\n",result1[i], result2[i]);
	}
	return 0;
}