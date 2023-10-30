#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//写一个函数：每调用一次这个函数，num的值增加1
//函数可以嵌套调用，但是不能嵌套定义

void Add(int * p)
{
    (* p)++;
}

int main()
{
    int num=0;
    int count=0;
    int i;
    printf("需要调用这个函数的次数：>");
    scanf("%d",&i);
    for(count=1;count<=i;count++)
    {
         Add(&num);
    }
   
    printf("%d \n",num);

    system("pause");
    return 0;
}