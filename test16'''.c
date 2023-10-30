#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//布尔类型:用来表示真假的变量
//bool flag-ture ;
//bool flag-false;



//写一个函数判断一个年份是不是闰年

bool panduanshibushirunnian(int n)
{
    int z=0;
    if(((n%4==0)&&(n%100!=0))||(n%400==0))

    return true;
    else        
    return false;
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

//if里面判断true也可以往下运行函数