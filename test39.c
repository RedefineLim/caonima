#include <stdio.h>
#include <stdlib.h>

void exchange(int * x ,int * y )     //形参
{
    int tep = (* x);
    (* x) = (* y);
    (* y) = tep;
}

int main()
{
    int m = 2;
    int n = 3;
    printf("交换前： m=%d   n=%d \n",m , n);
    exchange(&m ,&n );     //实参
    printf("交换后： m=%d   n=%d \n",m , n);

    system("pause");
    return 0;
}