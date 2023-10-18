#include<iostream>
using namespace std;

class A 
{
    int x;
    public:
    A()
    {
        cout<"\n calling base class default";
    }
    A(int a)
    {
        x=a;
        cout<<"\n calling base class parameterized"<<x;
    }
    ~A()
    {
        cout<<"\n calling base class destructor";
    }
};

class B:public A

{
    int l;
    public:
    B()
    {
        cout<<"\n calling derived class default: ";
    }
    B(int p):A(p)
    {
        l=p;
        cout<<"\n calling derived class parameterized: "<<l;
    }
    ~B()
    {
        cout<<"\ncalling derived class destuctor";
    }
};

int main() {
    B obj2(1);
    return 0;
}