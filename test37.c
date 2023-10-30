#include <stdio.h>
#include <stdlib.h>

int maxn(int m , int n)
{
    return (m>n)? m : n;
}

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int ret = maxn( m, n);
    printf("%d \n",ret);

    system("pause");
    return 0;
}

