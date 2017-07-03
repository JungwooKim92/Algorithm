#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101][101];


int main()
{
	int m, n, time;
	int x1, y1, x2, y2;
	int temp;
	int count=0,sum =0;
	vector<int> result;
	pair<int,int> p,temp_p;
	stack<pair<int, int>> st;

	scanf("%d %d %d", &m , &n, &time);
	for (int i = 0; i < time; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		temp = x1;
		x1 = y1;
		y1 = temp;
		temp = x2;
		x2 = y2 - 1;
		y2 = temp - 1;
		for (int j = x1; j<= x2; j++)
		{
			for (int k = y1; k <= y2; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
			{
				sum = 0;
				count++;
				p = make_pair(i, j);
				st.push(p);
				while (true)
				{
					p = st.top();
					st.pop();
					if (arr[p.first][p.second] == 0)
					{
						arr[p.first][p.second] = 1;
						sum++;
					}
					
					if (p.second != n-1 && arr[p.first][p.second+1] == 0)
					{
						temp_p = make_pair(p.first, p.second+1);
						st.push(temp_p);
					}
					if (p.second != 0 && arr[p.first][p.second-1] == 0)
					{
						temp_p = make_pair(p.first, p.second-1);
						st.push(temp_p);
					}
					if (p.first != m - 1 && arr[p.first+1][p.second] == 0)
					{
						temp_p = make_pair(p.first+1, p.second);
						st.push(temp_p);
					}
					if (p.first != 0 && arr[p.first-1][p.second] == 0)
					{
						temp_p = make_pair(p.first-1, p.second);
						st.push(temp_p);
					}
					if (st.empty() == 1)
						break;
				}
				result.push_back(sum);
			}
		}
	}
	sort(result.begin(), result.end());
	printf("%d\n", count);
	for (int i = 0; i < result.size(); i++)
	{
		printf("%d ", result.at(i));
	}


	
	return 0;
}