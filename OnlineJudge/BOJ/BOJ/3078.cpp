#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int count[20];
	
int main()
{

	int n,k;
	scanf("%d %d", &n, &k);
	string *a = new string[n];
	pair<int,int> p;
	vector<pair<int,int>> vec;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		p = make_pair(i+1,a[i].length());
		vec.push_back(p);
	}
	int j=0;
	while(true)
	{
		count[vec.at(j).second]++;
		j++;
		if(j==k)
			break;
	}
	


	return 0;
}
