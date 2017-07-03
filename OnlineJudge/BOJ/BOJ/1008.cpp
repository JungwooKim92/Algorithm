#include <stdio.h>
//절대 오차 범위10^-9 즉 소소점 9번째 자리까지
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	if((a>0 && b>0) && (a<10 && b<10))
	{
		printf("%.9lf\n", a/b);
	}

	return 0;
}