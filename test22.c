#include <stdio.h>
#include <stdlib.h>

//编写函数不允许创建临时变量，求字符串长度

//模拟实现strlen

// int My_strlen(char * str)
// {
//     int count=0;
//     while (* str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

int My_strlen(char * str)
{
    if(* str !='\0')
        return My_strlen(str+1)+1;
    else  
        return 0;
}

int main()
{

    char arr[]= "abc";
    int len = My_strlen(arr);
    printf("%d \n", len);

    system("pause");
    return 0;
}