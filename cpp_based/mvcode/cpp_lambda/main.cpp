#include<iostream>


using namespace std;

// 匿名函数对象

int main()
{

    int a = 2;
    int b = 3;

    int c = 4;


    // [捕获变量](参数列表) 可选限定符->返回类型{ 函数代码 }
    auto lambdaFunc = [a, b](int x, int y) -> bool
    {
        return a + b > x + y;// 表达式只能捕获a b
    };



    auto sl = [=](int x, int y)->int{
        return a+b+x+y;
    };

    int dd = sl(10,20);

    
    int i = 1;
    auto t8 = [&] {
    return i;
    };

    i += 1;

    cout << t8() << endl;  //打印1 如果想即时访问外部变量，应使用引用捕获



    return 0;
}



