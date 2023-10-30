#include <stdio.h>
#include <stdlib.h>

//打印1000~2000年之间的闰年


//判断闰年的规则：
//1.能被四整除但是不能被100整除的是闰年
//2.能被400整除也是闰年
int main ()
{
    int nian=0;
    for(nian=1000;nian<=2000;nian++)
    {
        //判断闰年
        if(nian%4==0){
            if(nian%100!=0)
                printf("%d  ",nian);
        else{
            if(nian%400==0)
                printf("%d  ",nian);
        }   
    }

    }

    system("pause");
    return 0;
}