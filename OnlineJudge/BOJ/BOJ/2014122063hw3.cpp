#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>

using namespace std;
int arr[302][302];
int rearr[302][302];
int visited[302];

bool bfs(int s, int t, int parent[])
{
	memset(visited, 0, sizeof(visited));
	queue<int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;
	while (!q.empty())
	{
		int u = q.front(); q.pop();
		for (int v = 0; v < 302; v++)
		{
			if (visited[v] == false && rearr[u][v] > 0)
			{
				q.push(v); parent[v] = u; visited[v] = true;
				if (v == 301)
					return(visited[t] == true);
			}
		}
	}
	return (visited[t] == true);
}

int calc(int s, int t)
{
	int u, v;
	for (u = 0; u < 302; u++)
	{
		for (v = 0; v < 302; v++)
		{
			rearr[u][v] = arr[u][v];
		}
	}
	int parent[302];
	int max_flow = 0;

	while (bfs(s, t, parent))
	{
		int path_flow = INT_MAX;
		for (v = t; v != s; v = parent[v])
		{
			u = parent[v];
			path_flow = min(path_flow, rearr[u][v]);
		}
		for (v = t; v != s; v = parent[v])
		{
			u = parent[v];
			rearr[u][v] -= path_flow;
			rearr[v][u] += path_flow;
		}
		max_flow += path_flow;
	}
	return max_flow;
}




int main()
{
	int n, k, d;
	int temp;
	int time;
	int max = 0;
	int ans = 0;
	scanf("%d %d %d", &n, &k, &d);
	fill(arr[0] + 1, arr[0] + n + 1, k);
	for (int i = 1; i <= d; i++)
	{
		scanf("%d", &temp);
		arr[200 + i][301] = temp;
	}
	for (int j = 1; j <= n; j++)
	{
		max = 0;
		scanf("%d", &time);
		for (int i = 1; i <= time; i++)
		{
			scanf("%d", &temp);
			arr[j][200 + temp] = 1;
		}
	}

	printf("%d\n", calc(0, 301));
	return 0;
}