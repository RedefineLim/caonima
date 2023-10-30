// #include <stdio.h>
// #include <stdlib.h>


// //凑硬币
// int main()
// {
//     int x;
//     int one, two ,five;
//     int exit=0;
//     scanf("%d",&x);
//     for(one=1; one<=x*10;one++){
//         for(two=1;two<=x*10/2;two++){
//             for(five=1;five<=x*10/5;five++){
//                 if(one +2*two+5*five==x*10){
//                     printf("可以用%d个1角加%d个2角加%d个5角得到%d元。\n",one,two,five,x);
//                     exit=1;
//                     break;
//                 }
//             }
//             if(exit) break;
//         }
//         if(exit) break; //接力break法
//     }

// //break和continue只能对于他所在的那一层循环

//     system("pause");
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>


//凑硬币
int main()
{
    int x;
    int one, two ,five;

    scanf("%d",&x);
    for(one=1; one<=x*10;one++){
        for(two=1;two<=x*10/2;two++){
            for(five=1;five<=x*10/5;five++){
                if(one +2*two+5*five==x*10){
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元。\n",one,two,five,x);
                    goto out;
                }
            }
        }                       //goto法  较接力break法更加简洁
    }
out:    

//break和continue只能对于他所在的那一层循环

    system("pause");
    return 0;
}