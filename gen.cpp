#include <ctime>
#include <random>
#include <iostream>
using namespace std;

// 获取一个[a, b]之间的整数（最大范围[0, 32757]）
#define rd(a, b) (rand() % (b - a + 1) + a)

int main()
{
    srand(time(0)); // 随机数种子
    
    /* ---------------------------------------------------------*/
    // 写出随机数据

    int cases = 1; // T 组数据
    cout << cases << endl;

    while(cases -- )
    {
        // 根据题目输出具体格式的数据

        for (int i = 1; i <= 10; i ++ ) cout << rd(1, 5) << endl;
    }
}