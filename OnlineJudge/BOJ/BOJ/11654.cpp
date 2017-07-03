#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	char a[100];
	int b[26];
	fill_n(b,26,-1);
	scanf("%s", a);
	int i=0;
	while(a[i]!=NULL)
	{
		//printf("%d\n", (int)a[i]-97);
		if(b[(int)a[i]-97]==-1)
			b[(int)a[i]-97] = i;
		i++;
	}
	for(int i=0; i<26; i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}