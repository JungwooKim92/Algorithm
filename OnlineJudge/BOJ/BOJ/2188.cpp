#include <iostream>
#include <queue>
using namespace std;

int arr[201][201];
int room[201];
bool cow[201];
int main()
{
	int m, n, time;
	int temp;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &time);
		for (int j = 1; j <= time; j++)
		{
			scanf("%d", &temp);
			arr[i][temp] = 1;
		}
	}
	int p=1, q=0;
	int ans = 0;
	int check_tmp;
	bool come_here = false;
	while (true)
	{
		q++;
		if (arr[p][q] == 1 && room[q] == 0)
		{
			if (come_here == false)
			{
				room[q] = p;
				arr[p][q] = 0;
				//ans++;
				p++;
				q = 0;
			}
			else
			{
				come_here = false;
				arr[p][q] = 0;
				room[q] = p;
				p = check_tmp + 1;
				q = 0;
				//ans++;
			}
		}
		else if (arr[p][q] == 1 && room[q] != 0)
		{
			arr[p][q] = 0;
			come_here = true;
			check_tmp = p;
			p = room[q];
			room[q] = check_tmp;
			q = 0;
		}
		if(p > m)
		{
			break;
		}
		if (q > n)
		{
			if (come_here == true)
			{
				come_here = false;
				p = check_tmp + 1;
				q = 0;
			}
			else
			{
				p++;
				q = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (room[i] != 0)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}