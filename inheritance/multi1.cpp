#include<iostream>
using namespace std;

class A 
{
public:
    int a, b;
    void ip()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
};

class B
{
public:
    int c;
    void ipB() {
        cout << "Enter c: ";
        cin >> c;
    }
};

class C : public A, public B
{
public:
    void ipC() {
        
        if (a > b && a > c)
            cout << "A is greater than b and c";
        else if (b > a && b > c)
            cout << "B is greater than a and c";
        else if (c > a && c > b)
            cout << "C is greater than a and b";
        else
            cout << "Some values are equal.";
    }
};

int main() {
    C obj;
    obj.ip();
    obj.ipB();
    obj.ipC();
    return 0;
}
