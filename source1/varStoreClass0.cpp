/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 18:24:26
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 21:16:23
 */
/*
    auto:     C++11以来, 声明变量时根据初始化表达式自动推动该变量的类型、声明函数时函数返回值的占位符
    register: C++98标准中auto关键字用于自动变量的声明，但由于使用极少且多余，在c++11中已删除这一用法
    static:
    extern:
    mutable:
    thread_local(C++11)

    根据初始化表达式自动推断被声明的变量的类型,如:
    auto f=3.14;      //double
    auto s("hello")   //const char*
    auto z = new auto(9) // int*
    auto x1 = 5, x2 = 5.0, x3='r'; //错误，必须是初始化为同一类型

    -register存储类
    register存储类用于定义存储在寄存器中而不是RAM中的局部变量。这意味着变量的最大尺寸等于寄存器的大小(通常是一个词)，且不能对它应用一元的'&'运算符(因为它没有内存位置)
    {
        register int miles;
    }
    寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义'register'并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制

    -static存储类
    static 存储类指示编译器在程序的生命周期内保持{局部变量}的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用static修饰局部变量可以在函数调用之间保持局部
    变量的值。
    static 修饰符也可以用于{全局变量}。当static修饰全局变量时，会使变量的作用域限制在{声明它的文件}内。

    在 c++ 中,当static用在{类数据成员}上时，会导致仅有一个该成员的副本被{类的所有对象}共享
*/

#include <iostream>

//函数声明
void func(void);

static int count=10; /*全局变量*/

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}

// 函数定义
void func(void)
{
    static int i =5; // 局部静态变量
    i++;
    std::cout << "变量i为" << i;
    std::cout << ",变量cout为" << count << std::endl;
}