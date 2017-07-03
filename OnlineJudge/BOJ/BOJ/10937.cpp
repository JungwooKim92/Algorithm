#include <iostream>
#include <vector>
using namespace std;

int price[5][5] = { {100,70,40,0}, {70,50,30,0},{40,30,20,0},{0,0,0,0} };
int arr[11][11];
int check[11];
bool check[4];
int main()
{
	int n,temp;
	char temp_c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%c", &temp_c);
			if (temp_c == 'A')
			{
				temp = 4;
				check[0] = true;
			}
			else if (temp_c == 'B')
			{
				temp = 3;
				check[1] = true;
			}
			else if (temp_c == 'C')
			{
				temp = 2;
				check[2] = true;
			}
			else if (temp_c == 'F')
			{
				temp = 1;
				check[3] = true;
			}
			arr[j][i] = temp;
		}
	}

	solve(n);

	return 0;
}

//void solve(int n,int p, int q)
//{
//	//vector<int> min_int;
//	int min;
//	int temp;
//	int i = 0;
//	bool come = false;
//	memset(check, -1, sizeof(check));
//	//0을 확인
//	while (true)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] == 0 && check[j] == -1)
//			{
//				check[j] = 1;
//				come = true;
//			}
//		}
//		if (come == false)
//			break;
//		i++;
//		if (i == n)
//			break;
//	}
//	
//	//각 행에 대해서
//	for (int i = 0; i < n; i++)
//	{
//		min = INT_MAX;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] < min)
//				min = arr[i][j];
//		}
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] -= min;
//		}
//		//min_int.push_back(min);
//	}
//
//	//각 열에 대해서
//	for (int i = 0; i < n; i++)
//	{
//		min = INT_MAX;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j][i] < min)
//				min = arr[j][i];
//		}
//		for (int j = 0; j < n; j++)
//		{
//			arr[j][i] -= min;
//		}
//		//min_int.push_back(min);
//	}
//
//}

void solve(int n)
{
	int min;
	if (check[3] == true)
	{
		min = 1;
	}
	eles if (check[2] == true)



}