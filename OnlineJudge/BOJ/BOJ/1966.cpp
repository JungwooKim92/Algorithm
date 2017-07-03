#include <utility>
#include <stdio.h>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int time;
	int n;
	int k;
	bool max = false;
	scanf("%d", &time);
	pair<int, int> p,temp1,temp2;
	queue<pair<int,int>> q;
	int nn;
	int count=1;
	vector<int> v;
	int t =0;
	for(int i=0; i<time; i++)
	{
		q = queue<pair<int,int>>();
		t=0;
		scanf("%d", &n);
		scanf("%d", &k);
		int *arr = new int[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
			p = make_pair(i,arr[i]);
			q.push(p);
		}
		if(n==1)
		{
			v.push_back(1);
			continue;
		}
		temp1 = q.front();
		q.pop();
		nn=n;
		while(true)
		{
			if(nn==1)
				break;
			temp2 = q.front();
			q.pop();
			if(temp1.second < temp2.second)
				max = true;
			q.push(temp2);
			t++;
			if(t == nn-1)
			{
				if(max==true)
				{
					q.push(temp1);
					temp1 = q.front();
					q.pop();
					max=false;
					t=0;
				}
				else
				{
					if(temp1.first == k)
					{
						break;
					}
					else
					{
						temp1 = q.front();
						q.pop();
						max=false;
						count++;
						nn--;
						t=0;
					}
				}
			}
			
		}
		v.push_back(count);
		count=1;
	}
	int result;
	for(int i=0; i<time; i++)
	{
		result = v.at(i);
		printf("%d\n", result);
	}

	return 0;
}