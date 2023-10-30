#include <stdio.h>
#include <stdlib.h>

//如何写程序输出100以内的素数
int main()
{
    int x;
    int cnt = 0;  //相当于计数器
  // x=2;
    //for(x=2;x<100;x++)
    //while (cnt<50)

for(x=2;cnt<50 ;x++)
    {
         int i;
         int isPrime=1;
        for (i=2;i<x;i++){
            
            if(x%i==0){
              isPrime=0;
              break;
            }
        }
     if(isPrime==1){
        printf("%d ",x);
        cnt ++;
    }
       // x++;
    }

        printf("\n");

    system("pause");
    return 0;
}  