#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
	int total, num;
	scanf("%d %d", &total, &num);
	queue<int> a;
	for(int i=1; i<=total; i++)
	{
		a.push(i);
	}
	int temp;
	int i=0;
	int *result = new int[total];
	while(a.empty()!=1)
	{
		for(int i=1; i<num; i++)
		{
			temp = a.front();
			a.pop();
			a.push(temp);
		}
		temp = a.front();
		a.pop();
		result[i]=temp;
		i++;
	}
	printf("<");
	for(int i=0; i<total-1; i++)
	{
		printf("%d, ", result[i]);
	}
	printf("%d", result[total-1]);
	printf(">");
	return 0;
}