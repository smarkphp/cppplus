/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-11 08:29:03
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-11 08:41:49
 */
/*
   使用结构tm格式化时间

   tm结构在C/C++中处理日期和时间相关的操作时，显得尤为重要。tm结构以C结构的形式保存日期和时间。大多数与时间相关的函数都使用了
   tm结构。下面的实例使用了tm结构和各种与日期和时间相关的函数

   在练习使用结构之前，需要对C结构有基本的了解，并懂得如何使用{箭头->运算符}来访问结构成员
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    cout << "1970 到目前经过的秒数:" << now << endl;

    tm *ltm = localtime(&now);

    // 输出tm结构的各个组成部分

    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << endl;
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}