#include <stdio.h>
#include <stdlib.h>

int Add(int m , int n )
{
    return m+n; 
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d", &m, &n);
    int sum = Add(m ,n);
    printf("%d \n",sum);

    system("pause");
    return 0;
}