#include <stdio.h>
#include <stdlib.h>

//字符串逆序（递归实现）

int main()
{
    char arr[]= "abcdef";    
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left =0 ;
    int right = sz-2;     //'\0'算一个字符，再减去一个就到了最后一个元素的下标
    while(left<right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;

        left++;
        right--;
    }
    printf("%s \n",arr);

    system("pause");
    return 0;
}