/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 18:04:48
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 18:23:54
 */
#include<iostream>
using namespace std;

int main()
{
    short int i;
    short unsigned int j; 

    j  = 50000;
    
    i = j;
    
    cout << i << " " << j;

    return 0;

}

/* C++中的类型限定符

   const:   const类型的对象在程序执行期间不能改变
   volatile: 修饰符volatile告诉编译器不需要优化volatile声明的变量,让程序值直接从内存中读取变量,对于一般的变量编译器会对变量进行优化,将内存中的变量值放在寄存器中以加快读写效率.
   restrict: 由restrict 修饰的指针是唯一一种访问它所指向的对象的方式.只有C99增加了新的类型限定符restrict
*/