#include <stdio.h>
#include <stdlib.h>

//写一个代码打印1~100所有3的倍数

int main()
{   
    int i=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        printf("%d ",i);
    }
    printf("\n");

    system("pause");
    return 0;
}