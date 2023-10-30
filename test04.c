#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // int n;
    // int i;
    // scanf("%d",&n);

    // for (i=0;i<=n;i++);
    // printf("%d\n",i);

    //for循环与while循环是等价的
    //任何一个for循环都可以改写成一个while循环
    //for（初始动作；条件；每轮的动作） 
    //如果循环表达有固定次数，用for。  如果必须执行一次用do。  其他的循环用while。
    int x;
    scanf("%d",&x);

    int i;
    int isPrime=1;   //x是素数
    for(i=2;i<x;i++){
        if(x%i==0){
            isPrime=0;
            break;
            }
            //printf("\n%d\n",i);
    }
    if(isPrime==1){
        printf("这个数是素数。\n");}
        else {printf("这个数不是素数。\n");
    }

    system("pause");
    return 0;
}