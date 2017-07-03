#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin>> s;
	int count=0;
	int i=0;
	
	while(true)
	{
		if(s.at(i)=='c')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			else if(s.at(i+1)=='=' || s.at(i+1)=='-')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}
		}
		else if(s.at(i)=='d')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			if(s.at(i+1)=='z' )
			{
				if(i+2==s.length())
				{
					count+=2;
					break;
				}
				else
				{
					if(s.at(i+2)=='=')
					{
						i+=3;
						count+=1;
					}
					else
					{
						count+=2;
						i+=2;
					}
				}
			}
			else if(s.at(i+1)=='-')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}
		}
		else if(s.at(i)=='l')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			else if(s.at(i+1)=='j')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}

		}
		else if(s.at(i)=='n')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			else if(s.at(i+1)=='j')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}

		}
		else if(s.at(i)=='s')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			else if(s.at(i+1)=='=')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}

		}
		else if(s.at(i)=='z')
		{
			if(i+1==s.length())
			{
				count+=1;
				break;
			}
			else if(s.at(i+1)=='=')
			{
				count+=1;
				i+=2;
			}
			else
			{
				count+=1;
				i+=1;
			}

		}
		else
		{
			count+=1;
			i+=1;
		}

		if(i >= s.length())
			break;


	}

	printf("%d",count);

	return 0;
}