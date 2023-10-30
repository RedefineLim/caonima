#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initial(int fre[], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        fre[i] = 0;
    }
}

void generate(int frequency[], int M, int N) 
{
    for (int i = 0; i < M; i++) 
    {
        int random_number = rand() % N;
        frequency[random_number]++;
    }
}

void calcu(int frequency[], int M, int N)
 {
    printf("请输入一个你要统计的数：");
    int t = 0;
    scanf("%d", &t);
    int i=t-1;
    double observed_frequency = (double)frequency[i] / M;
    double expected_frequency = 1.0 / N;
    printf("数字 %d 出现的频率：%.4f，期望频率：%.4f\n", t , observed_frequency, expected_frequency);
    
}

int main() 
{
    int M, N;
    printf("请输入M和N：");
    scanf("%d%d", &M, &N);

    srand((unsigned int )time(NULL));

    int fre[N];

    initial(fre, N);
    generate(fre, M, N);
    calcu(fre, M, N);

    system("pause");
    return 0;
}
