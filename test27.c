#include <stdio.h>
#include <stdlib.h>

//编写程序计算1~100中有多少个数字9

int main()
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        //判断个位是不是9
        //判断十位是不是9
        if(i%10==9)
        count++;
        if(i/10==9)
        count++;
    }
    printf("count = %d \n",count );

    system("pause");
    return 0;
}