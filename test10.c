#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//关机程序：电脑运行起来后一分钟内关机
//如果输入:“我是猪”。那么就取消关机
int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
again:
    printf("你的电脑将在60s后关机，如果输入“我是猪”，则取消关机\n");
    scanf("%s",input);
    if(strcmp(input,"我是猪")==0)
            {
                system("shutdown -a");
                printf("恭喜你，你的关机被取消了，哈哈哈哈哈哈哈哈哈哈哈");

            }
            else{
                goto again;
            }

    system("pause");
    return 0;
}