﻿#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////
class A {
 public:
  void Func1(int arg1) {
    std::cout << "func 1" << std::endl;
  }

  // OK: 通过参数类型不同重载 Func1()
  void Func1(double arg1) {
    std::cout << "func 2" << std::endl;
  }

  // OK: 通过参数个数不同重载 Func1()
  void Func1(int arg1, int arg2) {
    std::cout << "func 3" << std::endl;
  }

  // OK: 重载函数返回值可以不同
  bool Func1(int arg1, double arg2) {
    std::cout << "func 4" << std::endl;
    return true;
  }

  // ERROR: 不能只通过返回值来进行重载
  /*bool Func1(int arg1) {
    return true;
  } */
};

int _main_00()
{
    A a;
    a.Func1(1);
    a.Func1(1.0);
    a.Func1(1, 2);
    a.Func1(1, 2.0);
    return 0;
}


//////////////////////////////////////////////////////////





int main()
{
 
    _main_00();


    return 0;
}


