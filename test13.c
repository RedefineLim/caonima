#include <stdio.h>
#include <stdlib.h>


  //写一个函数交换两个整形变量
// void Swap(int x, int y )
// {
//     //找一个第三变量
//     //x，y是形参    当a，b的值传给形参时，x，y是a，b的临时拷贝空间  因为有独立的空间，所以修改形参不会影响实参
//     int c=0;
//     c=x;
//     x=y;
//     y=c;

// }
void Swap(int * px, int * py )
{
    //找一个第三变量
    //x，y是形参    当a，b的值传给形参时，x，y是a，b的临时拷贝空间  因为有独立的空间，所以修改形参不会影响实参
    int z=* px;
    * px =* py;
    * py = z;

}

int Add(int p, int q)
{
    return p+q;
}

int main()
{
    int a=0;
    int b=0;
    printf("请输入两个整数：>");
    scanf("%d %d", &a, &b);
              // 实参
    printf("交换前a=%d ,b=%d\n",a,b);
    int c= Add(a,b);
    Swap( &a , &b);
    printf("交换后a=%d ,b=%d\n",a,b);
    printf("%d\n",c);

    system("pause");
    return 0;
}
//我们发现Add 函数没有传地址 而Swap函数传递了地址
//Add函数没有改变a与b  而Swap函数改变了外部的a与b
//实参：真实传递给函数的东西
