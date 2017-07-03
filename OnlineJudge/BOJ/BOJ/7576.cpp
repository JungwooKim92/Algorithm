#include <stdio.h>
#include <deque>
#include <algorithm>
int a[1001][1001];

using namespace std;
int main()
{
	int m,n;
	int count=0;
	int count1=0;
	deque<pair<int,int>> dq;
	pair<int,int> temp,temp1;
	int day = 0;
	scanf("%d %d", &m, &n);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]==1)
			{
				temp = make_pair(i,j);
				dq.push_back(temp);
				count++;
			}
			else if(a[i][j]==-1)
				count1++;
		}
	}
	if(count == m*n)
		printf("0");
	else if(count1 == m*n)
		printf("0");
	else
	{
		temp = make_pair(0,0);
		dq.push_back(temp);
		while(true)
		{
			temp = dq.front();
			dq.pop_front();
			/*printf("here %d %d\n",temp.first,temp.second);
			for(int i=0; i<dq.size(); i++)
			{
				printf("dq.at(%d):%d %d\n",i, dq.at(i).first , dq.at(i).second);
			}
			for(int i=1; i<=n; i++)
			{
				for(int j=1; j<=m; j++)
				{
					printf("%d ", a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n\n");
			*/if(temp.first==0 && temp.second==0)
			{
				//printf("day :  %d\n", day+1);
				day++;
				dq.push_back(temp);
			}
			else
			{
				if(a[temp.first+1][temp.second] == 0 && temp.first+1 <= n)
				{
					a[temp.first+1][temp.second] = 1;
					temp1 = make_pair(temp.first+1,temp.second);
					dq.push_back(temp1);
					count++;
				}
				if(a[temp.first][temp.second+1] == 0 && temp.second+1 <= m)
				{
					a[temp.first][temp.second+1] = 1;
					temp1 = make_pair(temp.first,temp.second+1);
					dq.push_back(temp1);
					count++;
				}
				if(a[temp.first-1][temp.second] == 0 && temp.first-1 >= 1)
				{
					a[temp.first-1][temp.second] = 1;
					temp1 = make_pair(temp.first-1,temp.second);
					dq.push_back(temp1);
					count++;
				}
				if(a[temp.first][temp.second-1] == 0 && temp.second-1 >= 1 )
				{
					a[temp.first][temp.second-1] = 1;
					temp1 = make_pair(temp.first,temp.second-1);
					dq.push_back(temp1);
					count++;
				}
			}
			if(dq.size()==1 && dq.at(0).first==0 && dq.at(0).second==0)
				break;
		}

		if(count+count1 == m*n)
			printf("%d", day);
		else
			printf("-1");
	}

	return 0;
}