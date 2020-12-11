/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 16:50:34
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 16:57:53
 */
# include<iostream>
using namespace std;

int g; // 全局变量:  在所有函数外部定义的变量(通常在程序的头部)， 称为全局变量。全局变量的值在整个生命期内都是有效的.{可以被任何函数访问，也就是说，全局变量一旦声明，在整个程序中都是可用的}

int g2 = 20;
int main()
{
    // 局部变量声明: 在一个代码块内部声明的变量，成为局部变量。{它们只能被函数内部或者代码块内部的语句使用}
    int a, b;
    int c;


    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    g = a+ b;
    cout << g << endl;

    int g2 = 10;
    cout << g2 << endl;

    return 0;
}