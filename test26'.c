#include <stdio.h>
#include <stdlib.h>

//辗转相除法求最大公约数

int zuida(int m, int n)
{
    int rot=0;

    while(rot=m%n)
    {
        m=n;
        n=rot;
    }
    return n;
}

int main()
{
    int a ,b ;
    scanf("%d %d", &a, &b);
    int zd=zuida(a ,b );

    printf("%d \n",zd);

    system("pause");
    return 0;
}