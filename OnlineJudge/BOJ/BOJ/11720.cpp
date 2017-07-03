#include <stdio.h>
#include <cmath>
int main()
{
	
	int count,n,result=0;
	scanf("%d", &count);
	char *num = new char[count];
	scanf("%s", num);
	for(int i=0; i < count; i++)
	{
		result += num[i]-48; 
	}
	printf("%d\n",result);
	return 0;
}