#include <stdio.h>
#include <algorithm>
#include <utility>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int *a =  new int[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int s = 0;
	int f = n-1;
	int temp;
	vector<pair<int,int>> vec;
	pair<int,int> p;
	sort(a, a+n);

	while(true)
	{
		temp = a[s]+a[f];
		p = make_pair(temp,a[s]);
		vec.push_back(p);
		if(abs(a[s]) >= abs(a[f]))
			s++;
		else
			f--;
		if(s == f)
			break;
	}
	int j=0;
	int min = vec.at(0).first;
	int check = 0;
	while(true)
	{
		j++;
		if(j==vec.size())
			break;
		temp = vec.at(j).first;
		if(abs(temp) < abs(min))
		{
			min = temp;
			check = j;
		}
	}
	

	printf("%d %d", vec.at(check).second, vec.at(check).first -vec.at(check).second );
	return 0;
}