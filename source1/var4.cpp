/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 17:21:55
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 17:55:14
 */
# include<iostream>
using namespace std;

#define LENGTH 10         //常量定义形式1: #define 预处理
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    // return 0;

    // 第二种方式
    const int LENGTH2 = 11;   // 使用const 前缀声明指定类型的变量 {把常量定义成大写是一个很好的编程实践}
    const int WIDTH2 = 5;
    const char NEWLINE2 = '\n';
    int area2;

    area2 = LENGTH2 * WIDTH2;
    cout << area2;
    cout << NEWLINE2;
    return 0;
}