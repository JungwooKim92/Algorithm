#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
int main()
{

	string a[100];
	int i=0;
	while(getline(cin,a[i]))
	{	
		
		if(a[i].length()>100)
		{
			printf("length is over 100");
			return -1;
		}
		cout<< a[i] <<endl;
		i++;
		if(i == 100)
			break;
		
	}
	return 0;
}