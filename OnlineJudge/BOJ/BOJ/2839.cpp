#include <stdio.h>

int main()
{
	int N,a,b,result;
	bool correct = false;
	scanf("%d", &N);
	if(N>=3 && N<=5000)
	{
		a = N / 5;
		b = 0;
		for(int i= 0; i<=a; )
		{
			result = N - (a * 5);
			if(result%3 == 0)
			{
				b = result/3;
				printf("%d\n", a+b);
				break;
			}
			else
			{
				if(i==a)
					printf("-1\n");
			}
			a= a-1;
		}

	}
	return 0;
}