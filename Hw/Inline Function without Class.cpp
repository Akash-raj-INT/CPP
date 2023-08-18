#include <iostream>

using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int squared = square(num);

    cout << "Square: " << squared << endl;

    return 0;
}
