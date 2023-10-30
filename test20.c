#include <stdio.h>
#include <stdlib.h>
#include "Add.h"

//函数的声明
//函数的定义

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int sum= Add(x ,y );

    printf("%d\n",sum);

    system("pause");
    return 0;
}