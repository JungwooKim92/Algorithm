#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string input;
	stack<int> a;
	cin >> input;
	int j = 0;
	bool check =false;
	bool check1 = false;
	bool check2 = false;
	int sum1 =1;
	int sum2 =0;
	int count1=0;
	int count2=0;
	while(true)
	{
		if(j==input.length())
		{
			break;
		}
		if(input.at(j)=='(')
		{
			count1++;
			check = false;
			check1 = true;
			check2 = false;
			sum1 *=2;
		}
		else if(input.at(j)=='[')
		{
			count2++;
			check = false;
			check1 = false;
			check2 = true;
			sum1*=3;
		}
		else if(input.at(j)==')')
		{
			if(check1 == true || check2 == false)
			{
				if(check == false )
				{
					count1--;
					if(count1<0)
						break;
					sum2 += sum1;
					sum1 /=2;
					check = true;
				}
				else
				{
					count1--;
					if(count1<0)
						break;
					sum1 /=2;
					check = true;
				}
			}
			else
			{
				count1=1;
				break;
			}
		}
		else if(input.at(j)==']')
		{
			if(check1 == false || check2 == true)
			{
				if(check == false)
				{
					count2--;
					if(count2<0)
						break;
					sum2 += sum1;
					sum1 /=3;
					check = true;
				}
				else
				{
					count2--;
					if(count2<0)
						break;
					sum1 /=3;
					check = true;
				}
			}
			else
			{
				count2=1;
				break;
			}
		}
		j++;
	}
	if(count1 == 0 && count2 ==0)
		printf("%d", sum2);
	else
		printf("0");
	return 0;
}
