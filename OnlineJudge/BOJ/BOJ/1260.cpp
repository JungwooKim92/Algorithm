#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

int a[1001][1001];

bool check[1001];
stack<int> dfs;
int temp =0;
int result[1001];
int k=0;

bool check1[1001];
queue<int> bfs;
int result1[1001];
int q=0;

void DFS(int n, int i, int j)
{
	while(true)
	{
		if(a[i][j]==1)
		{
			if(check[j]==false)
			{
				check[j]=true;
				result[k]=j;
				k++;
				dfs.push(j);
				DFS(n,j,1);
			}
			else
			{
				j++;
			}
		}
		else
		{
			j++;
		}

		if(j>n)
		{
			j=dfs.top();
			dfs.pop();
			break;
		}
	}

}

void BFS(int n,int i,int j)
{
	
	while(true)
	{
		if(a[i][j]==1)
		{
			if(check1[j]==false)
			{
				check1[j]=true;
				bfs.push(j);
				result1[q]=j;
				q++;
			}
			j++;
		}
		else
			j++;

		if(j>n)
		{
			if(bfs.empty()==1)
				break;
			i = bfs.front();
			bfs.pop();
			BFS(n,i,1);
		}
		
	}
}

int main()
{
	int n,v,s;
	int z,zz;
	scanf("%d %d %d", &n ,&v , &s);
	for(int i=0; i<v; i++)
	{
		scanf("%d %d",&z, &zz);
		a[z][zz]=1;
		a[zz][z]=1;
	}

	int i=s;
	int j=1;
	check[s]=true;
	dfs.push(s);
	result[k]=s;
	k++;
	DFS(n,s,j);

	i=1;
	j=1;
	check1[s]=true;
	bfs.push(s);
	i=bfs.front();
	bfs.pop();
	result1[q]=s;
	q++;
	BFS(n,i,j);
	
	for(int i=0; i<k; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	for(int i=0; i<q; i++)
	{
		printf("%d ", result1[i]);
	}
	printf("\n");
	
	return 0;
}