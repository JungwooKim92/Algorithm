#include <stdio.h>
#include <string.h>

int main()
{
	int count,n,sum,rate;
	scanf("%d", &count);
	
	int *sumarr = new int[count];
	//int *rate = new int[count];
	float *average = new float[count];

	for(int j=0; j<count; j++)
	{
		sumarr[j] = 0;
		rate = 0;

		scanf("%d", &n);
		int *a= new int[n];
		
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
			sumarr[j] += a[i];
		}

		average[j] = sumarr[j]/n;
		for(int i=0; i<n; i++)
		{
			if(average[j] < a[i])
			{
				rate += 1;
			}
		}
	
		average[j] = ((float)rate / n) * 100;
	}
	for(int i=0; i<count; i++)
	{
		printf("%.3f%\n", average[i]);
	}

	return 0;

}