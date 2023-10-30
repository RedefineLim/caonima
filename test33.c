#include <stdio.h>
#include <stdlib.h>

//探讨一下数组名

int main()
{
    int arr[10]={0};
    printf("%p \n",arr);
    printf("%p \n",arr+1);
    printf("-------------------------\n");
    printf("%p \n",&arr[0]);
    printf("%p \n",&arr[0]+1);
    printf("-------------------------\n");
    printf("%p \n",&arr);
    printf("%p \n",&arr+1);


    system("pause");
    return 0;
}