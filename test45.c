#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函数原型
void generateRandomNumbers(int array[], int size);
void countFrequency(int array[], int size);
void printFrequency(int array[], int size);
void cleanupResources(int array[]);

int main() {
    int size = 100; // 数组大小
    int randomNumbers[size];

    // 初始化随机数生成器
    srand((unsigned int )time(NULL));

    // 生成随机数
    generateRandomNumbers(randomNumbers, size);

    // 统计频率
    countFrequency(randomNumbers, size);

    // 输出频率
    printFrequency(randomNumbers, size);

    // 清理资源
    cleanupResources(randomNumbers);

    system("pause");
    return 0;
}

// 生成随机数
void generateRandomNumbers(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10; // 在0到9之间生成随机数
    }
}

// 统计频率
void countFrequency(int array[], int size) {
    // 在这里，我们将简单地统计0到9之间每个数字的出现次数
    int frequency[10] = {0};

    for (int i = 0; i < size; i++) {
        frequency[array[i]]++;
    }

    // 存储频率信息在数组中
    for (int i = 0; i < 10; i++) {
        array[i] = frequency[i];
    }
}

// 输出频率
void printFrequency(int array[], int size) {
    for (int i = 0; i < 10; i++) {
        printf("Frequency of %d: %d\n", i, array[i]);
    }
}

// 清理资源
void cleanupResources(int array[]) {
    // 这个函数通常用于释放任何动态分配的内存，但在这个示例中不需要。
}
