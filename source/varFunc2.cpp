/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 12:33:02
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 13:56:45
 */

# include<iostream>
using namespace std;

int sum(int a, int b=20)
{
    int result;
    result = a + b;
    return (result);
}

int main()
{
    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;

    // 调用函数来添加值
    result = sum(a, b);
    cout << "Total value is: " << result << endl;

    // 再次调用函数
    result = sum(a);
    cout << "Total value is: " <<result << endl;

    return 0;
}

/*
    C++11 提供了匿名函数的支持，称为Lambda函数（也叫 Lambda表达式）。
    Lambda表达式把[函数看作对象]。Lambda表达式可以像对象一样使用，比如可以将它们赋给[变量]和[参数]传递, 还可以像函数一样对其求值。
    Lambda表达式本质上与[函数声明]非常类似。Lambda表达式具体形式如下:

    [capture](parameters)->return-type{body}
    
    例如
    [](int x, int y) {return x < y;}

    如果没有返回值可以表示为:
    [capture](parameters){body}

    例如:
    []{++global_x;}
    
    在一个更为复杂的例子中，返回类型可以被明确的指定如下:
    [](int x, int y) -> int{int z = x +y ; return z+x;}

    // 在本例中，一个临时的参数z被创建用来存储中间结果。如同一般的函数, z的值不会保留到下一次[该不具名函数再次被调用时]
    // 如果lambda函数没有返回值（例如void), 其返回类型可被完全忽略
    // 在lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包(Closure)行为。与JavaScript闭包不同，C++变量
    // 传递有{传值}和{传引用}的区别。可以通过前面的[]来指定

    ```
    [] // 没有定义任何变量。使用未定义变量会引发错误
    [X, &y]  // x以传值方式传入{默认}， y以{引用方式}传入
    [&] // 任何被使用到的外部变量都隐式地以{引用方式}加以调用
    [=] // 任何被使用到的外部变量都隐式地以{传值方式}加以调用
    [&,x]  // x显示地以{传值方式}加以引用。其余变量以{引用方式}加以引用
    [=,&z]  // z 显示地以{引用方式}加以引用。其余变量以{传值方式}加以引用
    ```

    
*/