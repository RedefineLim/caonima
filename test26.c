#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    int i;
    scanf("%d %d",&a ,&b );
    for(i=a;i>0;i--)
    {
        if(b%i==0 && a%i==0)
        {
            printf("这两个数的最大公约数是：>%d\n",i);
            break;              //跳出for循环
        }
    }

    system("pause");
    return 0;
}

//暴力求解：不够高效