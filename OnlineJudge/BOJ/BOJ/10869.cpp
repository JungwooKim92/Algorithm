#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a>0 && b>0) && (a<10000 && b<10000))
	{
		printf("%d\n", a+b);
		printf("%d\n", a-b);
		printf("%d\n", a*b);
		printf("%d\n", a/b);
		printf("%d\n", a%b);
	}
	return 0;
}
	