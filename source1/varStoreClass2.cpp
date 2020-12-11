/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 21:17:55
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 21:33:18
 */
# include<iostream>

extern int count;

void write_extern(void)
{
    std::cout << "Count is: " << count << std::endl;
}

// 编译: g++ varStoreClass1.cpp varStoreClass2.cpp -o write

/*
    mutable 说明符仅适用于类对象，这将在本教程的后面讲解
*/


