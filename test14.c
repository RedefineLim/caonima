#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int derta=1;
    printf("这是一个可以判断您输入的数是不是素数的程序\n");
    printf("请输入一个大于1的数：>");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)   derta=0;
        if(derta==0)   break;
        
    }
    if (derta==0)
        printf("这个数不是质数\n");
        else  printf("这个数是质数\n");

    system("pause");
    return 0;
}