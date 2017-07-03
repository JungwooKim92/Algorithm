#include <stdio.h>
#include <vector>
#include <utility>
#include <math.h>
using namespace std;

pair<int,int> p;
vector<pair<int,int>> pair_vec;
vector<int> n_vec(100001);

int init(vector<int> &a ,vector<int> &tree, int node, int start, int end)
{
	
	if(start==end)
	{
		//printf("node : %d  idx: %d  start :  %d  end : %d\n",node,a[start],start,end);
		return tree[node] = a[start];
	}
	else
	{
		return tree[node] = min(init(a, tree, node*2, start, (start+end)/2), init(a, tree, node*2+1, (start+end)/2 + 1, end));
	}
}

int find(vector<int> &tree,int node, int start, int end, int left, int right)
{
	if(left > end || right < start)
		return 1000000001;
	if(start>= left && end <= right)
		return tree[node];
	return min(find(tree, node*2, start, (start+end)/2, left, right), find(tree, node*2+1, (start+end)/2 + 1, end, left, right));
}
int main()
{
	int m, n;
	int n_temp,p_temp1,p_temp2;
	int min;
	scanf("%d %d", &m, &n);

	vector<int> tree(4*m);			//트리벡터
	for(int i=0; i<m; i++)
	{
		scanf("%d",&n_temp);
		n_vec.at(i)=n_temp;	//n을 집어넣는 벡터
	}

	for(int i=0; i<n; i++)			//범위를 집어넣는 벡터
	{
		scanf("%d %d", &p_temp1, &p_temp2);
		p = make_pair(p_temp1,p_temp2);
		pair_vec.push_back(p);
	}
	init(n_vec, tree, 1, 0, m-1);		//트리 생성
	/*printf("%d\n",tree.at(1));
	printf("\n\n\n");
	for(int i =0; i<tree.size(); i++)
	{
		if(tree.at(i) != 0)
			printf("i : %d   tree(i) : %d\n",i, tree.at(i));
	}
	printf("\n\n\n");
	*/
	for(int i=0; i<pair_vec.size(); i++)
	{
		min = find(tree, 1, 0, m-1, pair_vec.at(i).first-1, pair_vec.at(i).second-1);
		printf("%d\n", min);
	}

	
	return 0;
}