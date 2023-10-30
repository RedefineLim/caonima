#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char arr[])
{
    int left =0 ;
    int right = strlen(arr)-1;     //'\0'算一个字符，再减去一个就到了最后一个元素的下标
    while(left<right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;

        left++;
        right--;
    }
 
}

int main()
{
    char arr[]= "abcdefg";
    reverse(arr);
    printf("%s \n",arr);

    system("pause");
    return 0;
}