/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-11 08:45:42
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-11 11:32:52
 */

/*
  1、本章将讨论C++编程中最基本和最常见的IO操作

  2、C++的IO操作发生在流中，流是字节序列。
    2.1 如果字节流是从设备{如键盘、磁盘驱动器、网络连接等}流向内存，这叫做输入操作。
    2.2 如果字节流是从内存流向设备{如显示器、打印机、磁盘驱动器、网络连接等}，这叫做输出操作

  3、I/O头文件
    3.1 <iostream> 该文件定义了cin、cout、cerr和clog对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流 和 缓冲标准错误流
    3.2 <iomanip>  该文件通过所谓的参数化的流操作器（比如 setw 和 setprecision）, 来执行对标准化I/O有用的服务
    3.3 <fstream>  该文件为用户控制的文件处理声明服务。我们将在{文件}和{流}的相关章节讨论

  4、C++编译器
    要根据输出变量的数据类型，选择合适的流插入运算符来显示值。<< 运算符被重载来输出内置类型(整型、浮点型、double型、字符串和指针)的数据项

    流插入运算符 << 在一个语句中可以多次使用，如上面实例所示， endl用于在行末添加一个换行符
    
   5、cerr - {错误消息}
    cerr 是iostream类的一个实例。cerr对象附属到{标准错误设备，通常也是显示屏}，但是cerr对象是{非缓冲}的，且每个流插入到cerr都会流出
   
   6、clog - {日志消息} 
    预定义对象clog是iostream类的一个实例。clog对象附属到{标准错误设备},通常也是显示屏，但是clog对象是{缓冲的}。这意味着每个流插入到
    clog都会先存储在缓冲区，直到{缓冲区塞满}或者{缓冲区刷新时}才会输出

    clog 也是与流插入运算符<< 结合使用的
  
   7、cout.self常见的标志
      7.1) boolalpha | 可用单词"true"和“false" 进行输入/输出的布尔值
      7.2) oct       | 用八进制格式显示数值
      7.3) dec       | 用十进制格式显示数值
      7.4) hex       | 用十六进制格式显示数值
      7.5) left      | 输出调整为左对齐
      7.6) right     | 输出调整为右对齐
      7.7) scientific | 用科学技术法显示浮点数
      7.8) fixed     | 用正常计数法显示浮点数(与科学计数法相对应)
      7.9) showbase  | 输出时显示所有数值的基数
      7.10） showpoint | 显示小数点和额外的零，即使不需要
      7.11) showpos  | 在非负数前面显示"+(正号)"
      7.12) skipws   | 当从一个流进行读取时，跳过空白字符(space、tabs、newlines)
      7.13) unibuf   | 在每次插入以后，清空缓冲区
      7.14) internal | 将填充字符回到符号和数值之间
      7.15) uppercase | 将大写形式显示科学计数法中的"e"和十六进制格式的"x"

    8、iostream中定义的操作符
      操作符|       描述                  ｜  输入 ｜ 输出|
      8.01) boolalpha | 启用boolalpha标志 | V     | V   |
      8.02) dec       | 启用dec标志       |     
      8.03) endl      | 输出换行标示、并清空缓冲区|  | V   |
      8.04) ends      | 输出空字符        |       | V   |
      8.05) fixed     | 启动fixed标志     |       | V   | 
      8.06) flush     | 清空流            |       | V   |
      8.07) hex       |启用hex标志        |  V     |V    |
      8.08) internal  | 启用internal标志  |       |V    | 
      8.04) left      |启用left标志        |      |V    |
      8.05) noboolalpha | 关闭boolalpha标志| V    | V   | 
      8.06) noshowbase | 关闭showbase标志|        | V    |
      8.07) noshowpoint | 关闭showpoint标志|      | V   | 
      8.08) noshowpos  |关闭showpos标志|          | V    |
      8.09) noskips    |关闭skipws标志|      V    |    |
      8.10) nounitbuf  | 关闭unitbuf标志|         |  V  |
      8.11) nouppdercase | 关闭upercase标志|      |  V   | 
      8.12) oct        | 启用oct|            V    |  V   | 
      8.13) right      | 启用right标志|           | V | 
      8.14) scientific |启用scientific标志|       |  V |
      8.15) showbase   |启用showbase标志|         |  V | 
      8.16) showpoint  |启用showpoint标志|        |  V |
      8.17) showpos    |启用showpos标志|          | V  |
      8.18) skipws     |启用skipws标志|       V     |   |
      8.19) unitbuf    |启用unitbuf标志|          |  V | 
      8.20) uppercase  |启用uppercase标志|        | V  |
      8.21) ws         |跳过所有前导空白字符|     V  |   |

     9、iomanip 中定义的操作符：
     https://www.runoob.com/cplusplus/cpp-basic-input-output.html
*/

#include <iostream>

using namespace std;

int main()
{
    // SectionI
    char name[50];
    cout << "请输入您的名称: ";
    cin >> name;
    // C++编译器根据要输入值的数据类型，选择合适的{流提取运算符}来提取值，并把它{存储在给定的变量}中
    // cin >> name >> age
    // 标准错误流: 
    cout << "您的名称是: " << name << endl;

    // SectionII: 输入多个操作符，中间用一个{字符}隔开
    // cin>>a;cin.get();
    // cin>>b;cin.get();
    // cin>>c;
    
}
