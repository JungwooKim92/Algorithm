#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string letter;
	cin>>letter;
	for(int i=0; i<letter.length(); i+=10)
	{
		
		cout << letter.substr(i,10)<<endl;
	}
	return 0;
}