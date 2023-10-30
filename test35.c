#include <stdio.h>
#include <stdlib.h>

int DigSum(unsigned int n)
{
    if(n>9)
    return DigSum(n/10) + n%10;
    else
    return n;
}

int main()
{
    unsigned int n=0;
    scanf("%u", &n);
    int sum=DigSum(n);
    printf("%d \n",sum);

    system("pause");
    return 0;
}