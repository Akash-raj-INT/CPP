#include <iostream>
using namespace std;
class Parent {
protected:
    int x;
public:
    Parent() : x(26) {}
    int getValue() { return x; }
};

class Child1 : public Parent {
public:
    int getValue() { return x + 13; }
};

class Child2 : public Parent {
public:
    int getValue() { return x * 7; }
};

int main() {
    Child1 obj1;
    Child2 obj2;
    cout << obj1.getValue() << obj2.getValue();
    return 0;
}