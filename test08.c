#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    printf("%d",max);
    
    system("pause");
    return 0;
}