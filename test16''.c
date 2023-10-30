#include <stdio.h>
#include <stdlib.h>

//写一个函数判断一个年份是不是闰年

int panduanshibushirunnian(int n)
{
    int z=0;
    if(((n%4==0)&&(n%100!=0))||(n%400==0))

    return 1;
    else        
    return 0;
}

//函数的功能单一一点比较好

int main()
{
    int nian=0;
    for(nian=1000;nian<=2000;nian++)
    {
        if(panduanshibushirunnian(nian))
            printf("%d  ",nian);
    }

    system("pause");
    return 0;
}