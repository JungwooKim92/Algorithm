/* ���� �÷ο찡 �Ͼ��. �ذ����� �Ƹ� �������ڰ� �Ѿ���� ���� �ø����� ������ �ؼ�
���߿� ������Ҷ� ������ �������� �ٲ��༭ ����� �Ѵ�
���� ��� 1000�� ���� �ڷ����� ������ 3020 ���� ���� �ش� �ڸ��� 20�� ���� �ٸ� �ڷ������
3�� �־� 3000 �̶�� ���� ǥ�����ش�
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