/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 21:17:46
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 21:28:38
 */

/*
    extern 存储类用于提供一个{全局变量的引用},全局变量对所有程序文件都是可见的。当您使用'extern'时,对于《无法初始化的变量，会把变量名指向一个之前定义过的存储位置》
    当您有多个文件且定义了一个可以在其他文件中使用的{全局变量或函数}时，可以在他文件中使用extern来得到已定义的变量或函数的引用。可以这么理解：extern是用来在另一个
    文件中声明一个全局变量或函数。
    
    extern修饰符通常用于: 当有两个或多个文件共享相同的全局变量或函数的时候,如下:
*/

# include<iostream>

int count;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}