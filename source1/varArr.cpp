/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 14:43:56
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 15:34:03
 */

 /*
    1、C++支持数组数据结构，它可以存储一个{固定大小的、相同类型元素}的顺序集合。数组是用来存储一系列数据，但它往往被认为是{一系列相同类型的变量}
    2、数组的声明并不是声明一个个{单独的变量}，比如:number0、number1、......而是声明一个{数组变量}， 比如numbers,然后使用
       numbers[0], numbers[1], numbers[2],numbers[3]...numvers[99]来代表一个个单独的变量
    3、所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素.

    4、声明数组: arraySize必须是一个大于零的整数常量、type可以是任意有效的C++数据类型。
       type arrayName [arraySize]

    5、初始化数组:
       A: 逐个初始化数组、也可以使用初始化语句
          double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0}  // { } 之间的值的数目不能大于我们在声明时在方括号[ ] 中指定的数目                                   
       B: double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0}  // 如果省掉了数组的大小，数组的大小则为初始化时元素的个数
       C: balance[4] = 50.0;

          0: 第一个元素的索引: 基索引.
 */

# include<iostream>
using namespace std;

# include<iomanip>
using std::setw;

 int main()
 {
     int n[10]; // n是一个包含10个整数的数组

     // 初始化数组元素
     for (int i = 0; i < 10; i++){
         n[i] = i + 100;  // 设置元素i为i+100
     }
    cout << "Element" << setw(13) << "Value" << endl; 
    
    // 输出数组中第二个元素的值
    for (int j = 0; j < 10; j++ ){
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    return 0;
 }

/*
    C++数组详解

    1、多维数组;      [C++支持多维数组。多维数组最简单的形式是二维数组]
    2、指向数组的指针; [指定不带索引的<数组名称>来生成一个指向数组中<第一个元素的指针>]
    3、传递数组给函数; [指定不带索引的<数组名称>来给函数传递一个<指向数组的指针>]
    4、从函数返回数组; [C++允许从函数返回数组]
*/