#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu ()
{
    printf("*****************************************\n");
    printf("*****************************************\n");
    printf("*************   1.play     **************\n");
    printf("*************   0.exit     **************\n");
    printf("*****************************************\n");
    printf("*****************************************\n");
}


//0~RAND_MAX(32767)
void game ()
{
   while(1){
    int guess=0;
    // 1.猜数字第一步：电脑产生一个随机数
    int ret = rand()%100+1;   //生成随机数   //rand 函数返回一个整形的随机数
    // 2.猜数字
    printf("请猜数字：>");
    scanf("%d",&guess);
    if (guess < ret)
                  printf("猜小了\n");
    else if(guess > ret)
                  printf("猜大了\n");
    else{
        printf("恭喜你，猜对啦！！！！\n");
        break;}
   
    }

}

int main()
{
    srand( (unsigned int) time(NULL));                   //时间戳
                                                         //NULL空指针
    int input=0;
    do{

        menu();
        printf("请选择：>");
        scanf("%d",&input);
        switch (input)
        {
        case 1 : printf("猜数字\n") ;

                game();  //猜数字的整个逻辑
            break;

        case 0 : printf("退出游戏\n");
            break;
        
        default:
         printf("选择错误，重新选择！！");
            break;
        }

    }while (input);


    system("pause");
    return 0;
}