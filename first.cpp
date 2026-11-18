#include <iostream>
#include <iomanip>

using namespace std;

// 演示变量和数据类型
void learnTypesAndInput()
{
    int age;
    long long population;
    double height;

    cout << "请输入你的年龄（整数）：";
    if (!(cin >> age))
    {
        cout << "年龄输入无效，程序已停止。\n";
        return;
    }

    cout << "请输入一个很大的整数：";
    if (!(cin >> population))
    {
        cout << "大整数输入无效，程序已停止。\n";
        return;
    }

    cout << "请输入你的身高（米）：";
    if (!(cin >> height))
    {
        cout << "身高输入无效，程序已停止。\n";
        return;
    }

    cout << fixed << setprecision(2);
    cout << "年龄：" << age << " 岁\n";
    cout << "大整数：" << population << "\n";
    cout << "身高：" << height << " 米\n";
}

// 演示 if 分支
void learnIf()
{
    int score;

    cout << "\n请输入考试成绩（0 到 100）：";
    if (!(cin >> score))
    {
        cout << "成绩输入无效，程序已停止。\n";
        return;
    }
    if (score < 0 || score > 100)
    {
        cout << "成绩必须在 0 到 100 之间，程序已停止。\n";
        return;
    }

    if (score >= 90)
    {
        cout << "等级：优秀\n";
    }
    else if (score >= 60)
    {
        cout << "等级：及格\n";
    }
    else
    {
        cout << "等级：不及格\n";
    }
}

// 演示 for 循环
void learnFor()
{
    cout << "\nfor 循环：打印 1 到 5\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}

// 演示 while 循环
void learnWhile()
{
    int count = 3;

    cout << "\nwhile 循环：倒计时\n";
    while (count > 0)
    {
        cout << count << " ";
        count--;
    }
    cout << "开始！\n";
}

int main()
{
    cout << "===== C++ 基础入门 =====\n";

    learnTypesAndInput();
    learnIf();
    learnFor();
    learnWhile();

    return 0;
}