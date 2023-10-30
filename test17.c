#include <stdio.h>
#include <stdlib.h>

//用函数写整形有序数组的二分查找

                        //此处的arr是一个指针变量
//不要指望在函数中计算一个参数的实际大小！！！！！！
//数组传参上传的是首元素的地址，而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//形参arr看上去是数组，本质上是指针

int binary_search(int arr[] ,int k ,int sz )
{
    int left=0;
    int right=sz-1;

    while(left<=right)
    {
        int mid=(right+left)/2;
        if(arr[mid]<k)
        {
            left=mid+1;
         }else if(arr[mid]>k){
        right=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    //找到了返回下标
    //找不到返回-1
    int sz=sizeof(arr)/sizeof(arr[0]);

    int ret = binary_search(arr ,k ,sz );
    if(ret==-1){
        printf("找不到\n");
    }else{
        printf("找到了，下标是:%d\n",ret);
    }


    
    system("pause");
    return 0;
}

//形参与实参的名字既可以相同也可以不同
