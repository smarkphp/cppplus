/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 21:33:50
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 21:46:21
 */
/*
 * @Desccription: 
 * @version: 
 * @company: zy
 * @Author: Mark
 * @Date: 2020-12-09 21:33:50
 * @ListenEditors: Mark
 * @LastEditTime: 2020-12-09 21:41:13
 */
/*
    thread_local类
    使用thread_local说明符声明的变量仅可在{其上创建的线程上}访问。变量在创建线程时创建、并在销毁线程时销毁。每个线程都有自己的变量副本

    thread_local说明符可以与static或extern合并
    可以将thread_local仅用于{数据声明和定义}，thread_local不能用于{函数声明或定义}
*/
    
/*
    thread_local int x;  // 命名空间下的全局变量
    class X
    {
        static thread_local std::string s; // 类的static成员变量
    };

    static thread_local std::string X::s;  // X::s 是需要定义的
    
    void foo()
    {
        thread_local std::vector<int> v;  // 本地变量
    }
*/