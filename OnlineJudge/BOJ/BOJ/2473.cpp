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
	long long *a =  new long long[n];
	for(int i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a,a+n);
	int a1 = 0;
	int a2 = 1;
	int a3 = 2;
	long long temp;
	long long min = a[a1] + a[a2] + a[a3];	
	int check1=a1;
	int check2=a2;
	int check3=a3;
	while(true)
	{
		temp = a[a1] + a[a2] + a[a3];
		if(abs(min) > abs(temp))
		{
			min = temp;
			check1 = a1;
			check2 = a2;
			check3 = a3;
		}

		a2++;
		if(a2 == a3)
		{
			if(a2 == n-3)
				break;
			else
			{

			}
		}
		/*a2++;

		if(a2 == a3 && abs(a[a1]) >= abs(a[a3]))
		{
			a1++;
			a2=a1+1;
		}
		else if(a2 == a3 && abs(a[a1]) < abs(a[a3]))
		{
			a3--;
			a2=a1+1;
		}
		if(a2==a3)
			break;*/
	}

	printf("%lld %lld %lld", a[check1], a[check2], a[check3]);
	return 0;
}