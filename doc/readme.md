# Agenda

## 链接

    https://www.runoob.com/cplusplus/cpp-environment-setup.html

## 安装插件

1、c++
2、c++ clang command adapter
3、c++ intelligense

## 编译执行

### 编译

    g++ helloworld.cpp

### 执行

    ./a.out

### 编译成指定文件(-o 选项指定可执行程序文件名)

    g++ helloworld.cpp -o helloworld

### 如果有多个c++代码文件，如runnoob1.cpp 、runnoob2.cpp，编译指令如下

    g++ runnoob1.cpp runoob2.cpp -o runnoob

### g++ 有些系统默认使用C++98，我们可以指定使用C++ 11来编译main.cpp文件

    g++ -g -wall -std=c++11 main.cpp

### g++常用命令

    |选项|解释|
    |---|---|
    |-ansi|只支持ANSI标准的C语法.这一选项将禁止GNU C的某些特色, 例如asm或typeof关键词|
    |-c|只编译生成目标文件|
    |-DMACRO|以字符串"1"定义MACRO宏|
    |-DMACRO=DEFN|以字符串"DEFN"定义MACRO宏|
    |-E|只运行C编译器|
    |-g|生成调试信息，GNU调试器可利用该信息|
    |-DIRECTORY|指定额外的头文件搜索路径DIRECTORY|
    |-LDRECTORY|指定额外的函数库搜索路径DIRECTORY|
    |-ILIBARY｜连接时搜索指定的函数库LIBRARY|
    |-m486|针对486进行代码优化|
    |-o|FILE生成指定的输出文件.用在生成可执行文件时｜
    ｜-Oo|不进行优化处理|
    ｜-O|或-O1优化生成代码|
    |-O2|进一步优化|
    |-O3|比-O2更进一步优化，包括inline函数|
    |-shared|生成共享目标文件。通常用在建立共享库时|
    |-static|禁止使用共享链接|
    |-UMACRO|取消对MACRO宏的定义|
    |-w|不生成任何告警信息|
    |-Wall|生成所有告警信息|