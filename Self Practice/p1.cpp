#include <iostream>
using namespace std;
class ParentClass {
public:
    ParentClass() { cout << "Parent "; }
};

class ChildClass : public ParentClass {
public:
    ChildClass() { cout << "Child "; }
};

int main() {
    ChildClass obj;
    return 0;
}