#include <stdio.h>
#include <math.h>
int count[10];

int main()
{
	int a,b,c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int result = a*b*c;
	int i=0;
	int d;
	int e;
	while(true)
	{
		d = (int)(result/(pow(10.0,i)));
		e = d%10;
		if(d==0)
			break;
		count[e]+=1;
		i++;
	}
	for(int j=0; j<10; j++)
		printf("%d\n", count[j]);

	return 0;
}