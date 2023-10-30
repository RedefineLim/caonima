#include <stdio.h>
#include <stdlib.h>

//求第n个斐波那契叔(浪费时间的写法，用函数递归)
int count=0;

int Fib(int n)
{
    if(n==3)   count++;
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}


int main()
{
    int n = 0;
    scanf("%d" ,&n);
    int ret= Fib(n);
    printf("第%d个斐波那数是：%d。\n", n, ret);
    printf("%d \n",count);

    system("pause");
    return 0;
}