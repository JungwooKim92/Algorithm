#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
	int time;
	int temp;
	int t1;
	int t2;
	scanf("%d", &time);
	vector<string> result;
	string str_temp;
	while(time)
	{
		int *a = new int[time];
		bool *check = new bool[time];
		
	
		for(int i=0; i<time; i++)
		{
			scanf("%d", &temp);
			if(i<=5)
			{
				a[i] = temp;
				check[i]=true;
			}
			else
			{
				a[i]=temp;
				check[i] = false;
			}
		}

		do{
			for(int i=0; i<time; i++)
			{
				if(check[i]==true)
				{
					if(a[i]>=10)
					{
						t1=a[i]/10;
						t2=a[i]%10;
						str_temp += t1+48;
						str_temp += t2+48;
					}
					else
						str_temp += a[i]+48;
					str_temp +=" ";
				}
					//cout<<a[i];
					
			}
			result.push_back(str_temp);
			str_temp.clear();
			result.push_back("\n");
		}while(prev_permutation(check,check+time));
		result.push_back("\n");
		scanf("%d", &time);
	}
	for(int i=0; i<result.size(); i++)
	{
		cout<<result.at(i);
	}
	return 0;
}