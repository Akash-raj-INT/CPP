#include <iostream>
using namespace std;
class Fruit {
protected:
    int quantity;
public:
    Fruit() : quantity(5) {}
    int getQuantity() { return quantity; }
};

class Apple : public Fruit {
public:
    int getQuantity() { return quantity + 10; }
};

class Orange : public Fruit {
public:
    int getQuantity() { return quantity * 2; }
};

int main() {
    Apple apple;
    Orange orange;
    cout << apple.getQuantity() << orange.getQuantity();
    return 0;
}