/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-11 11:33:19
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-11 14:21:54
 */
/*
    一、C++数据结构
        C/C++数组允许定义可存储相同类型数据项的变量，但是结构是{C++中另一种用户自定义}的可用的数据类型，它允许您存储{不同类型的数据项}

    二、定义结构
        ```
            struct type_name{
                member_type1 member_name1;
                member_type2 member_name2;
                member_type3 member_name3;
                ...
            } object_names;

            如下:
            struct Books{
                char title[50];
                char author[50];
                char subject[100];
                int book_id;
            } book;
        ```
    三、访问结构成员
        访问结构成员，我们使用成员运算符(.) ; {结构变量名称}.{结构成员}
*/

#include<iostream>
#include<cstring>

using namespace std;

// 声明一个结构体
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    Books Book1; // 定义结构体Books的变量Book1
    Books Book2; // 定义机构提Books的变量Book2

    // Book1 详述
    strcpy(Book1.title, "C++教程");
    strcpy(Book1.author, "Runnob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // Book2 详述
    strcpy(Book2.title, "CSS 教程");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "前端技术");
    Book1.book_id = 12346;

    // 输出Book1信息
    cout << "第一本标题: "<< Book1.title << endl;
    cout << "第二本作者: "<< Book1.author << endl;
    cout << "第一本书目: "<< Book1.subject << endl;
    cout << "第一本书ID: "<< Book1.book_id << endl;

    // 输出Book2信息
    cout << "第二本标题: "<< Book2.title << endl;
    cout << "第二本作者: "<< Book2.author << endl;
    cout << "第二本书目: "<< Book2.subject << endl;
    cout << "第二本书ID: "<< Book2.book_id << endl;

    return 0;
}