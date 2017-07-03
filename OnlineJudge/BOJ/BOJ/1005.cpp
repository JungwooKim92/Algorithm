#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int a[1001][1001];
int b[100001];

int result(int start, int n)
{
	if(start == n)
		return b[n];
	int j = start+1;
	int max = 0;
	int temp = 0;
	while(true)
	{
		if(a[start][j] == 1)
		{
			temp = b[start] + result(j,n);
		}
		j++;
		if(max < temp)
			max = temp; 
		if(j>n)
			break;
	}
	return max;
}

int main()
{
	int t;
	int n,k;
	int temp1, temp2;
	int re;
	int finish;
	scanf("%d", &t);
	vector<int> vec;
	

	for(int i=0; i<t; i++)
	{
		scanf("%d %d", &n ,&k);
		for(int i=1; i<=n; i++)
		{
			scanf("%d" , &b[i]);
		}
		for(int i=0; i<k; i++)
		{
			scanf("%d %d", &temp1, &temp2);
			a[temp1][temp2]=1;
		}
		scanf("%d", &finish);
		re = result(1,finish);
		vec.push_back(re);
	}

	for(int i=0; i<vec.size(); i++)
	{
		printf("%d\n", vec.at(i));
	}

	return 0;
}

