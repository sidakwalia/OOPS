#include <iostream>
using namespace std;

class A
{
public:
    virtual  void f1()=0;
    
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
    A *ptr;
    B o2;
    ptr=&o2;
   ptr->f1();

   
}