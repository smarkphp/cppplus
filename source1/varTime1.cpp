/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 18:01:44
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-11 08:28:57
 */

/*
    1、C++标准库中没有提供所谓的日期类型。C++继承了C语言用于[日期]和[时间]操作的结构和函数。

    2、有四个与时间相关的类型：clock_t、time_t、size_t 和 tm。
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    // SectionI
    // 1.1
    time_t now = time(0);
    cout << "now: " << now << endl ;

    // 1.2 把now转换为字符串形式
    char *dt = ctime(&now);
    cout << "本地时间和日期: "<< dt << endl;
    

    // SectionII: 把now转为tm结构
    // 2.1
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间: "<<dt<<endl;


}