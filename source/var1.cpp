/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 10:35:19
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 16:17:45
 * link: https://www.runoob.com/cplusplus/cpp-data-types.html
 */
#include<iostream>
#include<limits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "******************size**************"<<endl;
    cout << "type: \t\t" << "所占字节数:" << sizeof(bool);
    cout << "\t最大值:" << (numeric_limits<bool>::max)();
    cout << "\t\t 最小值: " << (numeric_limits<bool>::min)()<<endl;  // endl:这将在每一行后插入一个换行符、<< 向屏幕传多个值。用sizeof()函数来获取各种数据类型的大小

    cout << "char: \t\t" << "所占字节数: "<< sizeof(char);
    cout << "\t最大值: " << (numeric_limits<char>::max)();
    cout << "\tt 最小值: " << (numeric_limits<char>::min)() << endl; 


    cout << "signed char : \t" << "所占字节数: " << sizeof(signed char);
    cout << "\t最大值: " << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值: " << (numeric_limits<signed char>::min)() << endl;

    cout << "unsigned char: \t" << "所占字节数: " << sizeof(unsigned char);
    cout << "\t最大值:" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值: " <<(numeric_limits<unsigned char>::min)() << endl;

    cout << "wchar t :\t" << "所占字节数: " << sizeof(wchar_t);
    cout << "\t最大值:" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值:" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short: \t\t" << "所占字节数: " << sizeof(short);
    cout << "\t最大值:" << (numeric_limits<short>::max)();
    cout << "\t\t最小值" << (numeric_limits<short>::min)() << endl;
    

    cout << "int: \t\t" << "所占字节数: " << sizeof(int);
    cout << "\t最大值:" << (numeric_limits<int>::max)();
    cout << "\t\t最小值" << (numeric_limits<int>::min)()<<endl;
    
    cout << "unsigned: \t\t" << "所占字节数: " << sizeof(unsigned);
    cout << "\t最大值: "<< (numeric_limits<unsigned>::max)();
    cout << "\t最小值: " << (numeric_limits<unsigned>::min)() <<endl;

    cout << "long: \t\t" << "所占字节数: "<<sizeof(long);
    cout << "\t最大值:" << (numeric_limits<long>::max)();
    cout << "\t最小值: " << (numeric_limits<long>::min)() << endl;

    cout << "unsigned long: \t\t" << "所占字节数: "<< sizeof(unsigned long);
    cout << "\t最大值: " << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值: " << (numeric_limits<unsigned long>::min)() <<endl;

    cout << "double \t" << "所占字节数: "<< sizeof(double);
    cout << "\t最大值: " << (numeric_limits<double>::max)();
    cout << "\t最小值: " << (numeric_limits<double>::min)() << endl;

    cout << "long double: \t" << "所占字节数: " << sizeof(long double);
    cout << "\t最大值: " << (numeric_limits<long double>::max)();
    cout << "\t最小值: " << (numeric_limits<long double>::min)() <<endl;

    cout << "float: \t\t" << "所占字节数: " << sizeof(float);
    cout << "\t最大值: "<< (numeric_limits<float>::max)();
    cout << "\t最小值: " << (numeric_limits<float>::min)() << endl;

    cout << "size_t: \t" << "所占字节数: " << sizeof(size_t);
    cout << "\t最大值: " << (numeric_limits<size_t>::max)();
    cout << "\t最小值:" << (numeric_limits<size_t>::min)() <<endl;

    cout << "string: \t" << "所占字节数: " << sizeof(string) << endl;
    cout << "type: \t\t " << "************size*************" <<endl;
    return 0;
    
}


/*
    1、typedef声明: 为一个已有的类型取一个新的名字。
     ```
        typedef type newname;
        typedef int feet;  告诉编译器，feet是int的另一个名称
        feet distance; <这样来也是合法的>
     ```
     
    2、枚举类型
    ```
        A）枚举类型是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合
        B) 形式
            enum 枚举名{
                标识符[=整型常数],
                标识符[=整型常数],
            ...
                标示符[=整型常数]
            } 枚举变量
        C) 定义:
            enum color {red, green, blue} c;
            c = blue;
        D) 说明: 默认情况下，第一个名称的值为0, 第二个名称的值为1，第三个名称的值为2，
            enum color {red, green=5,blue};
    ```

    3、变量定义
    ```
        A） 变量定义: 就是告诉编译器在何处(where)创建变量的存储、以及如何(how)创建变量的存储。变量定义指定一个数据类型、并包含了该类型的‘一个’或‘多个’变量‘的列表
                    如下: type variable_list;
        B） type: 必须是一个有效的C++数据类型、可以是char、wchar_t、 int、float、double、bool或任何用户自定义的对象，variable_list可以由一个或多个标识符名称
                 组成，多个标识符之间用逗号分割，下面列出几个有效的声明
                 `
                    int i, j, k            // 声明并定义了变量i,j 和  k, 这表示编译器创建类型为int的名为i、j、k的变量 
                    char c, ch
                    float f,salary
                    double d
                 `
        C)  变量可以在声明的时候初始化（指定一个初始值）。初始化器由一个等号，后跟一个常量表达式组成，如下所示
            type variable_name = value
                `
                  extern int d = 3, f =5;    // d 和 f的声明
                  int d = 3, f = 5;          // 定义并初始化d 和f
                  byte z = 22;              //  定义并初始化z
                  char x = 'x';             //  变量X的值为'x'
                `
        

    ```
*/