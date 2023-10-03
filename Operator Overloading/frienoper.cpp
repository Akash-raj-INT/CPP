#include <iostream>
using namespace std;

class Number {
int x;

public:
Number(int n) 
{
x = n;
}

void operator++(int) 
{
cout << "Postfix increment:";
cout << x++ << endl;
}

void operator--(int) {2
cout << "Postfix decrement:";
cout << x-- << endl;
}
};

int main() {
Number N1(10), N2(20);
N1++;
N2--;
return 0;
}