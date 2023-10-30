#include <stdio.h>
#include <stdlib.h>

//strcpy字符串拷贝
int main()
{
    // char arr1[20]={0};
    // char arr2[ ]="Hello bit!";
    // strcpy(arr1,arr2);
    // printf("%s\n",arr1);

    //memset函数
    char arr[20]="hello word";
    memset(arr,'x',5);
    memset(arr+6,'y',3);
    printf("%s\n",arr);

    system("pause");
    return 0;
} 