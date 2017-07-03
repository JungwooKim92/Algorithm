#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
int main()
{

	string a[100];
	int i=0;
	cin >>a[i];	
	while(!a[i].empty())
	{
		if(a[i].length()>100)
		{
			printf("lengt is over 100");
			return -1;
		}
		cout<< a[i] <<endl;
		i++;
		if(i == 100)
			break;
		cin >>a[i];
	}
	return 0;
}