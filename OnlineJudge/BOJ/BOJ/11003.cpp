#include <stdio.h>
#include <utility>
#include <vector>

using namespace std;
int main()
{
	int n, l;
	scanf("%d %d", &n, &l);
	pair<int,int> a;
	vector<pair<int,int>> vec;
	int *result = new int[n];
	int temp;
	pair<int,int> temp_pair;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &temp);
		a = make_pair(temp,i+1);
		vec.push_back(a);
	}
	int i = 0;
	while(true)
	{
		temp = vec.at(i).second;
			
	}
	


	return 0;
}