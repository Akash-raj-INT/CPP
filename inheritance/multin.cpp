#include<iostream>
using namespace std;

class A
{
    public: int a,b;
    void ipA()
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }
};

class B
{
    public: 
    int c;
    void ipB()
        {
            cout<<"Enter c: ";
            cin>>c;
        }
};

class C: public A, public B
{
    int s;
    public: 
    void sum()
    {
        s= a+b+c;
        cout<<"sum= "<<s;
    }
};

int main()
{

    C obj;
    obj.ipA();
    obj.ipB();
    obj.sum();

return 0;
}