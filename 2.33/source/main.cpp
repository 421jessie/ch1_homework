#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	printf("�@��Ѫ��`���{��:\n");
	scanf_s("%f", &a);
	printf("�T�o�@���� / �[�ڦh�ֿ�:\n");
	scanf_s("%f", &b);
	printf("�����@���� / �[�گ��p�h�֤���:\n");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:\n");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O(�L���O):\n");
	scanf_s("%f", &e);

	f =  d + e + ((a / c) * b );

	printf("�q��O:%f", f);

	return 0;
}