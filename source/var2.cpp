/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 16:23:08
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 16:48:55
 */
# include <iostream>
using namespace std;

// 变量声明 : 变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明
extern int a, b;
extern int c;
extern float f; /*  当使用多个文件且只在其中一个文件中定义变量时(定义变量的文件在程序链接时是可用的)，变量声明就显得非常有用。您可以使用extern关键字在任何地方声明一个变量.
                    虽然您可以在C++程序中多次声明一个变量，但变量只能在某个文件、函数、或代码块中被定义一次。
                */

// 函数声明
int func();

int main()
{
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c <<endl;

    f = 20.0/3.0;
    cout << f << endl;

    // 函数调用
    int i = func();
    cout << i <<endl;
    return 0;
}



// 函数定义 - 函数实际定义可以在任何地方进行
int func()
{
    cout << "func " << endl;
    return 0;
}


/*
    C++ 中的左值(Lvalues)和右值(Rvalues)
    1、左值(lvalue): 指向内存位置的表达式被称为左值(lvaue)表达式。左值可以出现在赋值号的左边或右边 {位置}
    2、右值(rvalue): 术语和右值(rvalue)指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边 {数值}
    
    变量是左值，因此可以出现在赋值号的左边，数值型的字面是右值，因此不能被赋值，不能出现在赋值号的左边。下面语句
    int g = 20; (V)

    10 = 20; (X)
*/