#include <stdio.h>
#include <stdlib.h>

//数组传参的时候形参有两种写法
//1.数组
//2.指针

//void bubble_sort(int arr [])        可以
void bubble_sort(int * arr, int sz)
{
    //确定趟数
    int i=0;
    for(i=0;i<sz;i++)
    {
        //一趟冒泡排序
        int j=0;
        for(j=0;j<sz-1-i ;j++)
        {
            int tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= tmp;
        }
    }
}

int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    //冒泡排序的算法
    int sz= sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,sz);

    int i=0;

    for (i=0;i<sz;i++) 
    printf("%d  ",arr[i]);

    system("pause");
    return 0;
}