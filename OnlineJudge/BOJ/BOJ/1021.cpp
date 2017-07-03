#include <stdio.h>
#include <deque>
using namespace std;
//해당값이 있는것을 뽑아냄 즉 큐에 값이 3이있으면 3을 뽑아냄
int main()
{
	int n;
	int m;
	scanf("%d", &n);
	scanf("%d", &m);
	deque<int> dq;
	int *num = new int[m];
	int temp;
	int temp1;
	int count=0;
	for(int i=0; i<m; i++)
	{
		scanf("%d", &num[i]);
	}
	for(int i=0; i<n; i++)
	{
		dq.push_back(i+1);
	}

	int j=0;
	while(j!=m)
	{
		temp= dq.front();
		temp1 = dq.back();
		if(temp < dq.at(dq.size()/2))
		{
			if(num[j]>=temp && num[j] <=dq.at(dq.size()/2))
			{
				while(true)
				{
					temp = dq.front();
					dq.pop_front();
					if(temp == num[j])
						break;
					dq.push_back(temp);
					count++;
				}
			}
			else
			{
				while(true)
				{
					temp = dq.back();
					dq.pop_back();
					dq.push_front(temp);
					count++;
					if(temp == num[j])
					{
						dq.pop_front();
						break;
					}
					
				}
			}
		}
		else
		{
			if(num[j]>=temp && num[j] <=dq.at(dq.size()/2))
			{
				while(true)
				{
					temp = dq.front();
					dq.pop_front();
					if(temp == num[j])
						break;
					dq.push_back(temp);
					count++;
				}
			}
			else
			{
				while(true)
				{
					temp = dq.back();
					dq.pop_back();
					dq.push_front(temp);
					count++;
					if(temp == num[j])
					{
						dq.pop_front();
						break;
					}
				}
			}

		}
		j++;
		
	}
	printf("%d\n", count);
	return 0;
}

