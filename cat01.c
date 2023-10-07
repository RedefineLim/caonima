#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int m;

	do {
		printf("请输入一个正整数:");   scanf("%d", &m);
		if(m<=0)
		printf("\a请不要输入非正整数！\n");
	} while (m <= 0);
	printf("这个正整数求逆之后的结果是：");
	while (m % 10 > 0)
	{
		printf("%d", m % 10);
		m /= 10;

	}

	return 0;
}
