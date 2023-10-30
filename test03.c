#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    int fac=1;
    printf("请输入一个整数：");   scanf("%d",&n);
    // for(int i=1;i<=n;i++){//直接在for循环里面声明变量i
    //     fac*=i;
    // }
    int i=n;
    for( ;n>1;n--){
        fac*=i;
    }
    printf("有%d!=%d\n",i,fac);

    system("pause");
    return 0;


    system("pause");
    return 0;
}