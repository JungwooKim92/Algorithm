#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int a[3];
int b[3];
int c[3];
int d[3];

int main()
{
	int n;
	scanf("%d", &n);
	
	scanf("%d %d %d", &a[0],&a[1],&a[2]);
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
	c[0] = a[0];
	c[1] = a[1];
	c[2] = a[2];
	for(int i=1; i<n; i++)
	{
		scanf("%d %d %d", &a[0],&a[1],&a[2]);
		d[0] = a[0] + max(b[0],b[1]);
		d[1] = a[1] + max(max(b[0],b[1]),b[2]);
		d[2] = a[2] + max(b[1],b[2]);
		b[0] = d[0];
		b[1] = d[1];
		b[2] = d[2];

		a[0] = a[0] + min(c[0],c[1]);
		a[1] = a[1] + min(min(c[0],c[1]),c[2]);
		a[2] = a[2] + min(c[1],c[2]);
		c[0] = a[0];
		c[1] = a[1];
		c[2] = a[2];
	}
	printf("%d %d", max(max(b[0], b[1]), b[2]), min(min(c[0],c[1]),c[2]));
	return 0;
}