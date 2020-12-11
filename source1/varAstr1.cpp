/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-10 15:34:55
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-10 17:22:59
 */

/*
    一: C++ 提供了一下两种类型的字符串表示形式
        1、C风格字符串
        2、C++引入的string类型 

    二: C风格的字符串起源于C语言，并在C++中继续的到支持。字符串实际上是使用{null字符'\0'}终止的一堆字符数组。因此，一个以null结尾的字符串，
        包含了组成字符串的字符。

        下面的声明和初始化创建了一个"Hello"字符串。由于在数组的末尾存储了{空字符}，所以字符数组的大小比单词"Hello"的字符数多一个
         char greeting[6] = {'H','e','l','l','o','\0'};

         依据数组初始化规则，您可以把上面的语句写成以下语句
         char greeting[] = "Hello";       
*/


#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // ----SectionI-----
    char greeting[6] = {'H','e','l','l','o','\0'};  //注意: 其实，您不需要把null字符放在字符串常量的末尾。{C++编译器}会在初始化数组时，自动把'\0'放在字符串的末尾。

    cout << "Greeting message: ";
    cout << greeting << endl;

    // ----SectionII----
    cout << "=========********===============\n";
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int len;

    // 复制str1 到 str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1): " << str3 << endl;

    // ----重复赋值
    strcpy(str2, str1);
    cout << "strcpy(str2,str1): " << str2 << endl;
    
    // 连接str1 和 str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    // 连接后,str1的总长度
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;
    return 0;
}


/*
    C++ 中有大量的函数用来操作以null结尾的字符串:
    1、strcpy(s1, s2) // {复制}字符串s2到字符串s1
    2、strcat(s1, s2) // {连接}字符串s2到字符串s1的结尾
    3、strlen(s1)     // 返回字符串s1的{长度}
    4、strcmp(s1, s2) // 如果s1和s2是相同的，{则返回0}; 如果s1<s2则返回值{小于0}; 如果s1>s2 则返回值{大于0}
    5、strchr(s1, ch) // 返回一个指针，指向字符串s1中{字符ch}的第一次出现的位置
    6、strstr(s1, s2) // 返回一个指针，指向字符串s1中{字符串s2}的第一次出现的位置

*/