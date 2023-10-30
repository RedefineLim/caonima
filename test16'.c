#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nian=0;
    for(nian=1000;nian<=2000;nian++)
    {
        //判断闰年
        if(((nian%4==0)&&(nian%100!=0))||(nian%400==0))
        printf("%d  ",nian);
    }

    system("pause");
    return 0;
}