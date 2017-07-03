#include <stdio.h>

int main()
{
	int a[7] = {0,1,2,3,4,5,6};
	int b[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
	int result,m,d;
	scanf("%d %d", &m,&d);
	result = (b[m-1] + d-1)%7;
	switch(result)
	{
		case 0:
			printf("SUN\n");
			break;
		case 1:
			printf("MON\n");
			break;
		case 2:
			printf("TUE\n");
			break;
		case 3:
			printf("WED\n");
			break;
		case 4:
			printf("THU\n");
			break;
		case 5:
			printf("FRI\n");
			break;
		case 6:
			printf("SAT\n");
			break;
		
	}
	return 0;
}