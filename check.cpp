#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    int cnt = 32; // 比较32次
    while (cnt -- )
    {
        system("gen.exe > data.txt");
        // 调用上一级写的可执行文件
        system("D:/VsCode/Code/Horb7.exe < data.txt > pros.txt");
        system("force.exe < data.txt > std.txt");
        if (system("fc pros.txt std.txt"))
        {
            cout << "error!" << endl;
            return 0;
        }
    }
    cout << "your program may be right." << endl;
    return 0;
}