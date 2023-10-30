#include <stdio.h>
#include <stdlib.h>

//输入一个无符号整型，屏幕按顺序显示这个数的每位数字

void print(int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%u ",n%10);

}

int main()
{
    unsigned int num=0;
    scanf("%u",&num);
    
    print(num);
    
    system("pause");
    return 0;
}