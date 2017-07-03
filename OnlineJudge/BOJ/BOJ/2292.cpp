#include <stdio.h>

int main()
{
	int s=1;
	int f;
	scanf("%d", &f);
	int i=0;
	while(true)//30
	{
		if(f>s+6*i)
		{
			s+=6*i;
			i++;
		}
		else
		{
			printf("%d", i+1);
			break;
		}

	}

return 0;
}
