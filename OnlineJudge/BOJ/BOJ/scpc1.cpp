/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int Answer;
int t;
int main(int argc, char** argv)
{
	int T, test_case;
	/*
	The freopen function below opens input.txt file in read only mode, and afterward,
	the program will read from input.txt file instead of standard(keyboard) input.
	To test your program, you may save input data in input.txt file,
	and use freopen function to read from the file when using cin function.
	You may remove the comment symbols(//) in the below statement and use it.
	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	But before submission, you must remove the freopen function or rewrite comment symbols(//).
	*/

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		string a;
		vector<int> vec;
		cin >> a;
		for (int i = 0; i < a.length(); i++)
		{
			if (a.at(i) == '[')
				vec.push_back(1);
			else if (a.at(i) == '{')
				vec.push_back(2);
			else if (a.at(i) == '(')
				vec.push_back(3);
			else if (a.at(i) == ')')
				vec.push_back(4);
			else if (a.at(i) == '}')
				vec.push_back(5);
			else if (a.at(i) == ']')
				vec.push_back(6);
		}
		stack<int> st;
		int count1 = 0, count2 = 0, count3 = 0;
		bool here = false;
		for (int i = 0; i < vec.size(); i++)
		{
			if (vec.at(i) <= 3)
			{
				count1++;
				st.push(vec.at(i));
			}
			else if (st.empty()==0 && st.top() + vec.at(i)==7)
			{
				st.pop();
				count1--;
				count2++;
				if (st.empty() == 1)
				{
					count3 += count2;
					count1 = 0;
					count2 = 0;
					if (Answer < count3)
						Answer = count3;
				}
			}
			else
			{
				if (st.empty() == 1)
				{
					count1 = 0;
					count2 = 0;
					count3 = 0;
				}
				else
				{
					while (st.empty() != 1)
					{
						st.pop();
					}
					here = true;
				}
				
			}
			
			printf("%d    %d\n", i, Answer);
		}
		if (count2 != 0 && here == false)
		{
			if (Answer < count2)
				Answer = count2;
		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer * 2<< endl;
	}

	return 0;//Your program should return 0 on normal termination.
}

