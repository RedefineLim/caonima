#include <stdio.h>
#include <stdlib.h>

//写代码讲三个整数从大到小输出

int main()
{
    int a,b,c;
    int tmp = 0;
    //输入
    scanf("%d %d %d",&a ,&b ,&c );
    //调整
    if(a<b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }

    if(a<c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }

    if(b<c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }

    //输出
    printf("%d %d %d\n", a, b, c);

    system("pause");
    return 0;
}