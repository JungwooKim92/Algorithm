#include <cstdio>
#include <vector>

using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int count;
	int temp;
	int min;
	int max;
	int ans;
	bool empty;
	vector<int> vec;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &count);
		for (int j = 1; j <= count; j++)
		{
			scanf("%d", &temp);
			vec.push_back(temp);
		}
		min = 0;
		empty = false;
		ans = 0;
		for (int j = 0; j < count; j++)
		{
			if (j == 0)
			{
				temp = vec.at(j);
				ans++;
				empty = true;
			}
			else
			{
				if (temp > vec.at(j) && empty==true)
				{
					temp = vec.at(j);
				}
				else if(temp > vec.at(j) && empty == false)
				{
					temp = vec.at(j);
					ans++;
					empty = true;
				}
				else if (temp < vec.at(j) && empty == false)
				{
					temp = vec.at(j);
				}
				else if (temp < vec.at(j) && empty == true)
				{
					ans++;
					temp = vec.at(j);
					empty = false;
				}
			}
		}
		if (empty == true)
			ans--;
		printf("%d\n", ans);
	}
	return 0;
}