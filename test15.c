#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//打印100~200之间的素数
//sqrt是数学库函数

int main()
{
    int x;
    int i;
    printf("100~200之间的质数有：");
    for(x=101;x<=200;x+=2)
    {
        int derta=1;
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)   derta=0;
            
        }
        if(derta==1)  
            printf("%d ",x);
    }

    
    system("pause");
    return 0;
}