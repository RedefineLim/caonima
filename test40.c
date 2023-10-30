#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m = 2;
    int n = 3;
    int * p = &m;
    int * q = &n;

    //p,q就叫做m和n的指针变量（指针）
    printf("%p \n%p \n" , p, q);

    system("pause");
    return 0;
}