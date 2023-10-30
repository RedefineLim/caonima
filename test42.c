#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rann(int n)
{
    return rand()%n +1;
}

int main()
{
    srand((unsigned int) time(NULL));
    int N = 0;
    scanf("%d", &N);
    int ret = rann(N);      //生成随机数的函数
    printf("%d \n",ret );

    system("pause");
    return 0;
}