#include <stdio.h>
#include <stdlib.h>

//设计一个函数，判断这个数是不是素数


int Veg(int n)
{
    
    int i = 0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Veg(n);
    switch(ret)
    {
        case 1:
            printf("是素数\n");
            break;
        case 0:
            printf("不是素数\n");
            break;
        
    }
    system("pause");
    return 0;
}