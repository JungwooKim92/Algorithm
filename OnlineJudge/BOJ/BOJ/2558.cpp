#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	if((a>0 && b>0) && (a<10 && b<10))
	{
		if(a+b<10)
			printf("%d\n", a+b);
		else
			printf("error");
	}
	return 0;
}