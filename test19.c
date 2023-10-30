#include <stdio.h>
#include <stdlib.h>

//函数不写返回值类型的时候，默认返回值是int型
int main()
{
    printf("%d\n",printf("%d",printf("%d",printf("%d",43))));
    //strlen打印字符串长度

    system("pause");
    return 0;
}
//main函数有三个参数main(int argc , char *argv [] , char *envp)