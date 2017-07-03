#include <cstdio>

int main()
{
	int time;
	scanf("%d", &time);

	int max,min;
	int tmp_max, tmp_min;
	int temp;
	int length, count;
	for(int i=0; i<time; i++)
	{
		min = 0;
		max = 0;
		scanf("%d %d", &length, &count);
		for(int j=0; j<count; j++)
		{
			scanf("%d",&temp);
			/*if(temp == 0 || temp == length)
			{
				tmp_min = 0;
				tmp_max = 0;
			}*/
			if(temp < length - temp)
			{
				tmp_min =temp;
				tmp_max = length - temp;
			}
			else
			{
				tmp_min = length-temp;
				tmp_max = temp;
			}
			if(tmp_min > min)
				min = tmp_min;
			if(tmp_max > max)
				max = tmp_max;
		}
		printf("%d %d\n",min, max);
	}
	return 0;
}
