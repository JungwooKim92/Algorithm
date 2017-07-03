//#include <stdio.h>
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int *num = new int[n];
//	char *result = new char[2*n+1];
//	bool check = false;
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int max = num[0];
//	
//	int c= num[0];
//	
//	int k=0;//결과 저장을 위해 사용
//
//	for(int i=0; i<c; i++)
//	{
//		result[k] = '+';
//		k++;
//		//printf("+\n");
//	}
//	result[k] = '-';
//	k++;
//	//printf("-\n");
//
//	int i=1;
//	while(true)
//	{
//		if(max > num[i])
//		{
//			if(i+1 != n)
//			{
//				if(num[i] < num[i+1] && max > num[i+1])
//				{
//					check=true;
//					//printf("NO\n");
//					break;
//				}
//				else
//				{
//					//printf("-\n");
//					result[k] = '-';
//					k++;
//				}
//			}
//			else
//			{
//				result[k] = '-';
//				k++;
//				//printf("-\n");
//			}
//			
//		}
//		else if(max < num[i])
//		{
//			c = num[i] - max;
//			max = num[i];
//			for(int i=0; i<c; i++)
//			{
//				result[k] = '+';
//				k++;
//				//printf("+\n");
//			}
//			result[k] = '-';
//			k++;
//			//printf("-\n");
//		}
//
//		i++;
//		if(i==n)
//			break;
//	}
//
//	int p=0;
//	if(check==true)
//		printf("NO\n");
//	else
//	{
//		for(int i=0; i<k; i++)
//		{
//			printf("%c\n", result[i]);
//		}
//	}
//	return 0;
//
//}

#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	stack<int> a;
	int count;
	scanf("%d", &count);
	int *n = new int[count];
	char *result = new char[2*count+1];
	for(int i=0; i<count; i++)
	{
		scanf("%d", &n[i]);
	}
	int k=0;
	int j=0;
	int max = 0;
	int p=0;
	int temp=-1;
	bool check = false;
	//int check = n[0];
	while(true)
	{
		if(max <= n[k])
		{
			max = n[k];
			while(true)
			{
				j++;
				a.push(j);
				result[p]='+';
				p++;
				if(j==n[k])
					break;
			}
			result[p]='-';
			p++;
			a.pop();
		}
		else
		{
			while(temp!=n[k])
			{
				if(a.empty()==1)
				{
					check = true;
					break;
				}
				temp = a.top();
				a.pop();
				result[p]='-';
				p++;
			}
		}
		k++;

		if(k==count)
			break;
	}
	if(check == true)
	{
		printf("NO\n");
	}
	else
	{
		for(int i=0; i<p; i++)
		{
			printf("%c\n", result[i]);
		}
	}
	return 0;
}