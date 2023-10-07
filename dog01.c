#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m;
	do {
		printf("请输入一个正整数:");
		scanf("%d", &m);

		if (m <= 0) puts("\a请不要输入非正整数！");
	} while (m <= 0);
	printf("这个数的倒序排列是：");

	while (m%10 > 0) {
		printf("%d", m % 10);
		m /= 10;
	}
	puts("。");
	return 0;
}