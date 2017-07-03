#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int main()
{
	int n;
	int check = 1;
	int sum=0;
	scanf("%d", &n);
	int *a = new int[n];
	int *b = new int[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int j=n-2;
	sum += a[n-1];
	
	while(true)
	{
		
			
	}
	
	
	printf("%d", sum);	
	return 0;
}