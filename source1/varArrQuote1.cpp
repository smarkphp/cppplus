/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 17:35:49
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 18:01:20
 */
/*
    1、引用变量是一个别名，也就是说，{它是某个已存在变量的另一个名字},一旦把引用初始化为某个变量，就可以使用该{引用名称}或{变量名称}来指向变量
    
    2、C++引用vs指针
       A)  不存在空引用。引用必须连接到一块合法的内存 
       B)  一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。{引用和指针的可变性与不变性}
       C)  引用必须在{创建时}被初始化。指针可以在{任何时间}被初始化

    3、C++中的引用 
       "变量名称"是“变量"附属在内存位置中的标签，“引用"是“变量”附属在内存位置中的第二个标签。故而，可以通过{原始变量名称}或{引用}来访问 
    变量的内容。

    4、示例
    int i = 17;         // '&' 读作引用

    int& r = i;        // r是一个初始化为i的整型引用
    double& s = d;     // s是一个初始化为d的double型引用
*/

#include<iostream>
using namespace std;

int main()
{
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int&  r = i;
    double& s = d;

    i = 5;
    cout<<"value of i: "<<i<<endl;
    cout<<"Value of reference:"<< r << endl;
    
    d=11.7;
    cout << "value of d: " << d << endl;
    cout << "value of reference: " << s << endl;

    return 0;
}

/*
    1、把引用作为参数  | C++支持把引用作为参数传递给函数，这比传一般的参数更安全
    2、把引用作为返回值  ｜ 可以从C++函数中返回引用，就像返回其他数据类型一样
*/

