#include <stdio.h>
#include <stdlib.h>

//写代码讲三个整数从大到小输出

void Swap(int * m,int * n)
{
    int tep=0;
    tep= * m;
    * m= * n;
    * n= tep;
}

int main()
{
    int a,b,c;
    int tmp = 0;
    //输入
    scanf("%d %d %d",&a ,&b ,&c );
    //调整
    if(a<b)
    {
        Swap(&a,&b);
    }

    if(a<c)
    {
        Swap(&a,&c);
    }

    if(b<c)
    {
        Swap(&b,&c);
    }

    //输出
    printf("%d %d %d\n", a, b, c);

    system("pause");
    return 0;
}