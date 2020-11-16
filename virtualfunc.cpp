#include <iostream>
using namespace std;

class A
{
public:
    virtual  void f1()
    {   cout<<"Parent class function";
    }
};

class B : public A
{
public:
    void f1()
    {
        cout << "child class function" << endl;
    }
};

int main()
{
    A *ptr, o1;
    B o2;
    ptr = &o2;
    ptr->f1();
   
}