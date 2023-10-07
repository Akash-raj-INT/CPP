#include <iostream>
using namespace std;
class A {
protected:
    int x;
public:
    A() : x(10) {}
    int getX() { return x; }
};

class B : public A {
public:
    int getX() { return x * 2; }
};

class C : public B {
public:
    int getX() { return x + 5; }
};

int main() {
    C obj;
    cout << obj.getX();
    return 0;
}