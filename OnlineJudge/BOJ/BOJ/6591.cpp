#include <stdio.h> 
#include <queue>
using namespace std;
int main()
{
	unsigned int n, k;
	float sum1=1,sum2=1;
	queue<unsigned int> a;

	while(true)
	{

		scanf("%d %d", &n, &k);
		if(n==0 && k==0)
			break;
		for(int i=n; i>n-k; i--)
		{
			sum1*=i;
		}

		for(int i=1; i<=k; i++)
		{
			sum2*=i;
		}
		a.push(sum1/sum2);
		sum1 =1;
		sum2 =1;
	}
	int temp;
	while(a.empty()!=1)
	{
		temp = (int)a.front();
		a.pop();
		printf("%d\n", temp);
	}

	return 0;

}