#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int *h = new int[n];
	int *w = new int[n];
	int *t = new int[n];
	int hh;
	int ww;
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d", &h[i],&w[i],&t[i]);
	}
	for(int i=0; i<n; i++)
	{
		hh=t[i]%h[i];		
		ww=(t[i]/h[i])+1;
		if(hh==0)
		{
			hh=h[i];
			ww-=1;
		}
		if(ww<10)
		{
			printf("%d0%d\n",hh,ww);
		}
		else
			printf("%d%d\n",hh,ww);
	}


	return 0;
}