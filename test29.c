#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {0};

    int n=0;
    for(n=1;n<10;n++)
    {
        scanf("%d ",&arr[n]);
    }
    int max= arr[0];
    int i=0;
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d \n",max);

    system("pause");
    return 0;
}