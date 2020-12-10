/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 13:57:46
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 15:35:08
 */

# include<iostream>
# include<ctime>
# include<cstdlib>

using namespace std;

int main()
{
    // ==============基本定义==================
    // 数字定义 
    short s;
    int   i;
    long  l;
    float f;
    double d;

    // 数字赋值
    s = 100;
    i = 1000;
    l = 1000000;
    f = 230.47;
    d = 30949.374;

    // 数字输出
    cout << "short s: " << s <<endl;
    cout << "int   i:" << i << endl;
    cout << "long l: " << l << endl;
    cout << "float f: " << f << endl;
    cout << "double d: " << d << endl;
    cout << "\t";
    // ===========C++数学运算================
    //  数字定义
    short s1 = 10;
    int i1 = -1000;
    long l1 = 100000;
    float f1 = 230.47;
    double d1 = 200.374;

    // 数学运算
    cout << s1 << "\tsin(d1):" << sin(d1) << endl;
    cout << i1 << "\tabs(i1):" <<abs(i1) << endl;
    cout << d1 <<"\tflooor(d1):" << floor(d1) <<endl;
    cout << f1 << "\tsqrt(f1):" << sqrt(f1) << endl;
    cout << d1 << "\tpow(d1,2)" << pow(d1,2) << endl;
    cout << "\t";

    // ============生成随机数的实例=============
    // ----生成随机数的简单实例. 实例中使用time()函数来获取系统时间的秒数，通过rand()函数来生成随机数
    
    int i2, j2;

    // 设置种子
    srand((unsigned) time (NULL));  // time 来获取系统时间的秒数
    
    // 生成10个随机数
    for ( i2= 0 ; i2 < 10; i2++)
    {
        
        j2 = rand(); // 生成实际的随机数
        cout << i2 << " 随机数: " <<j2 << endl;
    }
    
    return 0;
    
 }

 /*
    一: C++数学运算
    1）double cos(double);
    2) double sin(double);
    3) double tan(double);
    4) double log(double);
    5) double pow(double, double);  //  第一个参数为x, 第二个参数为y, 则该函数返回x的y次方
    6) double hypot(double, double); // 该函数返回两个参数的平方总和的平方根。
    7) double sqrt(double);  // 该函数返回参数的平方根
    8) int abs(int); // 该函数返回整数的绝对值
    9) double fabs(double).  // 该函数返回任意一个浮点数的绝对值
    10) double floor(double) // 该函数返回一个小于或等于传入参数的最大整数

    二: C++随机数
    关于随机数生成器，有两个相关的函数。一个是rand(),该函数只返回一个伪随机数。生成随机数之前必须先调用srand()函数

 */