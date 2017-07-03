#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int sum=0; 
	int i=1;
	while(true)
	{
		sum+=i;
		i++;        
		if(sum >= n) 
			break;
	}
	if(i%2==1)
	{
		printf("%d/%d",i-(sum-n)-1,1+sum-n);
	}
	else if(i%2==0)
	{
		printf("%d/%d",1+sum-n,i-(sum-n)-1);
	}


	return 0;
}