#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;
    int fac=1;

    printf("请输入一个整数：");   scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac*=i;
    }
    printf("有%d!=%d\n",n,fac);

    system("pause");
    return 0;

}