#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	printf("一整天的總里程數:\n");
	scanf_s("%f", &a);
	printf("汽油一公升 / 加侖多少錢:\n");
	scanf_s("%f", &b);
	printf("平均一公升 / 加侖能行駛多少公里:\n");
	scanf_s("%f", &c);
	printf("一天的停車費:\n");
	scanf_s("%f", &d);
	printf("一天的通行費(過路費):\n");
	scanf_s("%f", &e);

	f =  d + e + ((a / c) * b );

	printf("通行費:%f", f);

	return 0;
}