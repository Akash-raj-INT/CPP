#include <iostream>
using namespace std;

union main{
    int a,b,c;
}A1;

int main()
{
    A1.a=5;
    A1.b=8;
    A1.c=A1.a;
    A1.a=A1.b;
    A1.b=A1.c;

    cout<<"a: ="<<A1.a<<endl<<"b: ="<<A1.b;

    return 0;
}