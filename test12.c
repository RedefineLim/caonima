#include <stdio.h>
#include <stdlib.h>

int get_max(int x, int y)
{
   return (x>=y ? x : y);            //三目操作符
}

int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);

        //函数的调用 
    int maxn = get_max(a,b);
    printf("%d\n",maxn);

    system("pause");
    return 0;
}