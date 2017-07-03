#include <stdio.h>
#include <deque>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	int count;
	scanf("%d", &count);
	deque<int> dq;
	string *a = new string[count];
	string *num = new string[count];
	int *n = new int[count];
	int j=0;
	long long temp;
	string strtemp;
	string *result = new string[count];
	bool check = false;
	bool *check2 = new bool[count];
	

	for(int i = 0; i<count; i++)
	{
		dq.clear();
		check2[i]=false;
		check = false;
		cin >> a[i];
		scanf("%d", &n);
		cin >> num[i];
		j=1;
		temp=0;
		strtemp.clear();
		while(true)
		{
			if(num[i].at(j)==']')
			{
				break;
			}
			if(num[i].at(j)!=',')
			{
				temp = num[i].at(j)-48;
				j++;
				if(num[i].at(j)==']')
				{
					dq.push_back(temp);
					break;
				}
				else if(num[i].at(j)!=',')
				{
					temp=temp*10;
					temp+=num[i].at(j)-48;
					j++;
					if(num[i].at(j)==']')
					{
						dq.push_back(temp);
						break;
					}
					if(num[i].at(j)!=',')
					{
						temp=temp*10;
						temp+=num[i].at(j)-48;
						j++;
						if(num[i].at(j)==']')
						{
							dq.push_back(temp);
							break;
						}
					}
					
				}
			}
			else
			{
				dq.push_back(temp);
				temp=0;
				j++;
			}
			if(j==num[i].length())
				break;
		}
		j=0;
		while(j!=a[i].length())
		{
			if(a[i].at(j)=='R')
			{
				if(check == true)
					check=false;
				else if(check == false)
					check=true;
			}
			else if(a[i].at(j)=='D')
			{
				if(dq.empty()==1)
				{
					result[i]="error";
					check2[i]=true;
					break;
				}
				else
				{
					if(check == false)
						dq.pop_front();
					else
						dq.pop_back();
				}
			}
			j++;
		}
		if(check2[i]==true)
		{
			continue;
		}
		else
		{
			if(check == false)
			{
				result[i]='[';	
				while(true)
				{
					if(dq.empty()==1)
					{
						result[i]+="]";
						break;
					}
					temp = dq.front();
					dq.pop_front();
					strtemp = to_string(temp);
					result[i] += strtemp;
					if(dq.empty()==1)
					{
						result[i]+="]";
						break;
					}
					else
						result[i].append(",");
					
				}

			}
			else
			{
				result[i]='[';	
				while(true)
				{
					if(dq.empty()==1)
					{
						result[i]+="]";
						break;
					}
					temp = dq.back();
					dq.pop_back();
					strtemp = to_string(temp);
					result[i] += strtemp;
					if(dq.empty()==1)
					{
						result[i]+="]";
						break;
					}
					else
						result[i].append(",");
			
				}
			}
		}
	}

	for(int i=0; i<count; i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}

