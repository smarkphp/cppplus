/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 17:09:21
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 17:34:40
 */

/*
    C++中使用指针

    使用指针时会进行以下几个操作:
        1、{定义}一个指针变量
        2、把{变量地址赋值}给指针
        3、{访问}指针变量中可用地址的值
*/

#include<iostream>
using namespace std;

int main()
{
    int var = 20; // 实际变量的声明
    int *ip;      // {1}指针变量的声明

    ip = &var;   // {2}在指针变量中存储var的地址
    
    cout << "Value of var variable:";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable:";
    cout << ip << endl;

    // 访问指针中地址的值 
    cout << "Value of *ip variable:";
    cout << *ip << endl;

    return 0;
}

/*
    C++指针详解

    必须记住的如下指针相关概念:
    1、C++ Null指针;         | C++支持空指针。NULL指针是一个定义在{标准库中的值为零}的常量
    2、C++ 指针运算符;        | 可以对指针进行四种算数运算： ++、--、+、-
    3、C++ 指针VS数组;        | 指针和数组有着密切的关系

    4、C++ 指针数组;          | 可以定义用来存储{指针的数组} ， 即：数组中存储指针
    5、C++ 指向指针的指针;     | C++允许指向指针的指针
    
    6、C++ 传递指针给函数;     | 通过{引用}或{地址传递参数},使{传递的参数在调用函数中}被改变 ，即：改变形参具体的数据
    7、C++ 从函数返回指针;     | C++允许函数返回指针到{局部变量、静态变量、动态内存分配}
*/