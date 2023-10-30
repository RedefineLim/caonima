#include <stdio.h>
#include <stdlib.h>

//数列求和
int main()
{
    int n;
    double sum=0;
    int i;
    int sign=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0/i;
        sign*=-1;
    }

    printf("f(%d)=%f\n",n,sum);

    system("pause");
    return 0;
}  