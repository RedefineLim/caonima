#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gener_rand(int * arr , int size)
{
    int i = 0;
    for(i=0;i<size;i++)
    {
        arr[i] = rand() % 10;
    }
}

void count(int * arr , int size)
{
    int fre[10] = {0};
    int i = 0;
    for(i=0;i<size;i++)
    {
        fre[arr[i]]++;
    }

    for(i=0;i<10;i++)
    {
        arr[i] = fre[i];
    }
}

void output(int * arr , int size)
{
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("Frequency of %d : %d \n",i ,arr[i]);
    }
}

int main()
{
    int size = 100;
    int arr[100] = {0};
    
    //初始化随机数生成器
    srand((unsigned int )time(NULL));

    //生成随机数
    gener_rand(arr , size);

    //统计频率
    count(arr , size);

    //输出频率
    output(arr , size);

    system("pause");
    return 0;
}