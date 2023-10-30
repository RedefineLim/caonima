#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randon(int m, int n ,int i);

int main()
{
    int M ,N ,i ,x ;
    
    srand((unsigned int )time(NULL));

    printf("M和N的值为：");
    scanf("%d %d", &M , &N);
    printf("输入一个数i：");
    scanf("%d", &i);
    x = randon( M, N, i);
    printf("数字%d 出现的频率是 %f ，期望的频率是%f", i, (float)x/M, (float)1/N);

    system("pause");
    return 0;
}

int randon(int m,int n, int i)
{
    int count = 0;
    int ready = 0;
    for(ready=0;ready<m;ready++)
    {
        int m = rand()%n + 1;
        if(m==i)
        {
            count++;
        }
    }
    return count ;
}