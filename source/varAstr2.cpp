/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 16:08:54
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 16:20:54
 */

/*
    C++中的String类

    C++标准库提供了string类类型, 支持上述所有的操作，另外还增加了其他更多功能。
        1、我们将学习C++标准库中的这个类，现在我们先来看看下面这个实例
        2、
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // cp str1 到 str3
    str3 = str1;
    cout << "str3: " << str3 << endl;

    // lk str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2: " << str3 << endl;

    // 连接后, str3的总长度
    len = str3.size();
    cout << "str3.size() " << len << endl;

    return 0;
}