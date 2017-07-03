#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	int a[8];
	for(int i=0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}
	int i=0;
	bool check1=false;
	bool check2=false;
	bool check3= false;
	while(true)
	{
		if(a[i]==i+1)
		{
			check2 = true;
			check3 = true;
		}
		else if(a[i] == 8-i)
		{
			check1 = true;
			check3 = false;
		}
		else
		{
			printf("mixed\n");
			break;
		}

		if(i==7)
		{
			if(check3 ==true)
			{
				if(check1==true)
				{
					printf("mixed\n");
					break;
				}
				else
				{
					printf("ascending\n");
					break;
				}
			}
			else
			{
				if(check2 ==true)
				{
					printf("mixed");
					break;
				}
				else
				{
					printf("descending");
					break;
				}
			}
		}
		i++;
	}

	return 0;
}