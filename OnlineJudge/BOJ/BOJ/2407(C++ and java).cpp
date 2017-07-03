/* 오버 플로우가 일어난다. 해결방법은 아마 일정숫자가 넘어갔을때 따로 올림수를 저장을 해서
나중에 출력을할때 각각의 차형으로 바꿔줘서 출력을 한다
예를 들어 1000인 범위 자료형이 있으면 3020 같은 경우는 해당 자리에 20을 놓고 다른 자료공간에
3을 넣어 3000 이라는 것을 표현해준다
*/


#include <stdio.h>

unsigned long long nk[1001][1001];

unsigned long long aa(unsigned long long n, unsigned long long k)
{
	if(nk[n][k] == 0)
	{
		if(n == 0 || k==0)
			nk[n][k] = 1;
		else
			nk[n][k] = aa(n,k-1)  + aa(n-1,k) ;
	}
	else
		return nk[n][k];

	return nk[n][k];
}


int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	aa(n-k,k);
	printf("%lld", nk[n-k][k]);
	return 0;

}