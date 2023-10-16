#include<iostream>
using namespace std;

class A
{
    public:
    int a, b, c;
    void(){
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    }
}o1;

class B1: public A
{   int s;
    public:
       void sum()
    {
        s= a+b+c;
        cout<<"sum= "<<s;
    }
};