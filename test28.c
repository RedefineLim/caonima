#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    double sum=0;
    int flag=1;
    for(i=1;i<=100;i++)
    {
        sum+=(1.0/i)*flag;
        flag = -flag;
    }

    printf("%1f \n",sum);

    system("pause");
    return 0;
}