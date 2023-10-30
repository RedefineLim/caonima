#include <stdio.h>
#include <stdlib.h>

int Fib(int n)
{
    int a=1;
    int b=1;
    int c=1;

    while(n>=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;

}


int main()
{
    int n = 0;
    scanf("%d" ,&n);
    int ret= Fib(n);
    printf("第%d个斐波那数是：%d。\n", n, ret);


    system("pause");
    return 0;
}