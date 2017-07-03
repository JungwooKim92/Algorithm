#include <stdio.h>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	int n;
	int m;
	scanf("%d", &n);
	scanf("%d", &m);
	deque<int> dq;
	int *num = new int[m];
	int temp;
	int count=0;
	vector<int> v;
	for(int i=0; i<m; i++)
	{
		scanf("%d", &num[i]);
	}
	for(int i=0; i<n; i++)
	{
		dq.push_back(i+1);
	}
	int j=0;
	for(int i=0; i<m; i++)
	{
		j=0;
		while(true)
		{
			if(dq.at(j)==num[i])
			{
				if(j<=dq.size()/2)
				{
					while(true)
					{
						temp = dq.front();
						dq.pop_front();
						if(temp == num[i])
							break;
						dq.push_back(temp);
						count++;
					}
					break;
				}
				else
				{
					while(true)
					{
						temp = dq.back();
						dq.pop_back();
						dq.push_front(temp);
						count++;
						if(temp == num[i])
						{
							temp = dq.front();
							dq.pop_front();
							break;
						}
						
					}
					break;
				}
			}
			j++;
		}
		
	}

		printf("%d ",count);
	
	return 0;
}
