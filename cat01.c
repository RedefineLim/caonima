#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int m;

	do {
		printf("������һ��������:");   scanf("%d", &m);
		if(m<=0)
		printf("\a�벻Ҫ�������������\n");
	} while (m <= 0);
	printf("�������������֮��Ľ���ǣ�");
	while (m % 10 > 0)
	{
		printf("%d", m % 10);
		m /= 10;

	}

	return 0;
}
