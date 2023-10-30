#include <stdio.h>
#include <stdlib.h>

//打印九九乘法口诀表

int main()
{
    int i=0;
    for(i=1;i<=9;i++)
    {
        int j=0;
        //打印九行
        for(j=1;j<=i;j++)
        printf("%d * %d = %2d  ",i,j, i*j);     //采用右对齐

        printf("\n");
    }

    system("pause");
    return 0;
}