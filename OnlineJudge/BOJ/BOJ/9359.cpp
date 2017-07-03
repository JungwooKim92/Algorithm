//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	long long a,b;
//	vector<pair<long long,bool>> vec;
//	vector<long long> vec1;
//	pair<long long,bool> p;
//	long long temp1=0;
//	long long n;
//	long long j=2;
//	long long count =0;
//	bool check = false;
//	long long i = 0;
//	long long temp = 1;
//		
//	for(int pp=0; pp<T; pp++)
//	{
//		vec.clear();
//		vec1.clear();
//		temp1= 0;
//		j= 2;
//		count = 0;
//		i= 0;
//		temp = 1;
//		scanf("%lld %lld %lld", &a, &b, &n);
//		if(n==1)
//		{
//			cout<<"Case #"<<pp<<": "<<b-a+1<<endl;
//			continue;
//		}
//		while(true)
//		{
//			if(n%j==0)
//			{
//				n/=j;
//				check = true;
//			}
//			else
//			{
//				if(check == true)
//				{
//					if(temp1 != j)
//					{
//						vec1.push_back(j);
//						check= false;
//						temp1 = j;
//					}
//				}
//				j++;
//				if(j>=n)
//				{
//					if(n != 1)
//						vec1.push_back(j);
//					break;
//				}
//			}
//		}
//		sort(vec1.begin(), vec1.end());
//		
//		bool *cc  = new bool[vec1.size()];
//		
//		//소인수 분해 완료
//		while(true)
//		{
//			cc[i] = 1;
//			do{
//				for(int k = 0; k<vec1.size(); k++)
//				{
//					if(cc[k]==1)
//					{
//						temp *=vec1.at(k);
//					}
//				}
//				if(i%2==0)
//				{
//					p = make_pair(temp,true);
//					vec.push_back(p);
//				}
//				else
//				{
//					p = make_pair(temp, false);
//					vec.push_back(p);
//				}
//				temp = 1;
//			}while(next_permutation(cc,cc+vec1.size()));
//			i++;
//			if(i==vec1.size())
//				break;
//		}
//		temp = b;
//		a = a - 1;
//		temp1 = a;
//		for(int i= 0; i <vec.size(); i++)
//		{
//			//cout<<"vec first"<<vec.at(i).first<<"temp : "<<temp<< "temp1 : "<<temp1<<endl;  
//			if(vec.at(i).second == true)
//			{
//				temp -= (b/vec.at(i).first);
//				temp1 -= (a/vec.at(i).first);
//			}
//			else
//			{
//				temp += (b/vec.at(i).first);
//				temp1 += (a/vec.at(i).first);
//			}
//			//cout<<endl;
//			//cout<<"vec second"<<vec.at(i).first<<"temp : "<<temp<< "temp1 : "<<temp1<<endl; 
//		}
//		cout<<"Case #"<<pp<<": "<<temp-temp1<<endl;
//	}
//	return 0;
//		
//}
//
//
//	

//#include <cstdio>

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for(int i=2; i*i<= n; i++)
//	{
//		while(n%i==0)
//		{
//			printf("%d\n", i);
//			n/=i;
//		}
//	}
//	if(n>1)
//		printf("%d\n",n);
//
//}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	//선언부분
	int time;
	scanf("%d", &time);
	long long a,b;
	int n;
	bool div_check = false;
	vector<long long> div_vec;
	pair<long long, bool> p;
	vector<pair<long long, bool>> per_vec;
	int mul = 1;
	int per_count = 0;
	long long temp1 = 0;
	long long temp2 = 0;
	long long temp3 = 0;
	long long temp4 = 0;
	//시작
	for(int i=0; i<time; i++)
	{
		div_vec.clear(); per_vec.clear(); mul=1;per_count=0;
		temp1=0; temp2=0; temp3=0; temp4=0;
		scanf("%lld %lld %d", &a,&b, &n);
		for(int i=2; i*i <= n; i++)
		{
			while(n%i == 0)
			{
				n/=i;
				div_check = true;
			}
			if(div_check == true)
			{
				div_vec.push_back(i);
				div_check = false;
			}
		}
		if(n>1)
			div_vec.push_back(n);
		//소인수분해 끝

		//소인수분해 출력
		//for(int i=0;i<div_vec.size(); i++)
		//	cout<<div_vec.at(i)<<endl;

		//permutation
		bool *per_check = new bool[div_vec.size()];
		for(int i=0; i<div_vec.size(); i++)
			per_check[i] = false;
		/*
		if(per_vec.at(i).second==true)
			{
				temp1 -= temp2/per_vec.at(i).first;
				temp3 -= temp4/per_vec.at(i).first;
			}
			else
			{
				temp1 += temp2/per_vec.at(i).first;
				temp3 += temp4/per_vec.at(i).first;
			}
		*/

		for(per_count=0; per_count<div_vec.size(); per_count++)
		{
			per_check[per_count] = true;
			do{
				for(int k = 0; k<div_vec.size(); k++)
				{
					if(per_check[k]==true)
					{
						mul *=div_vec.at(k);
					}
				}
				if(per_count%2==0)
				{
					p = make_pair(mul, true);
					per_vec.push_back(p);
				}
				else
				{
					p = make_pair(mul, false);
					per_vec.push_back(p);
				}
				mul = 1;
			}while(prev_permutation(per_check,per_check+div_vec.size()));
		}
		//for(int i=0; i<per_vec.size(); i++)
		//	cout<<"first : "<<per_vec.at(i).first<<"  second : "<<per_vec.at(i).second<<endl;
		
		temp1 = a-1;
		temp2 = a-1;
		temp3 = b;
		temp4 = b;
		for(int i = 0; i <per_vec.size(); i++)
		{
			if(per_vec.at(i).second==true)
			{
				temp1 -= temp2/per_vec.at(i).first;
				temp3 -= temp4/per_vec.at(i).first;
			}
			else
			{
				temp1 += temp2/per_vec.at(i).first;
				temp3 += temp4/per_vec.at(i).first;
			}
		}
		cout<<"Case #"<<i+1<<": "<<temp3 - temp1<<endl;
		
		
	}
	return 0;
}