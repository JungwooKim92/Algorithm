#include <stdio.h>
//���� ���� ����10^-9 �� �Ҽ��� 9��° �ڸ�����
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	if((a>0 && b>0) && (a<10 && b<10))
	{
		printf("%.9lf\n", a/b);
	}

	return 0;
}