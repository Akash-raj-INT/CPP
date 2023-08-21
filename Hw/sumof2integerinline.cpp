#include <iostream>

using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    int result = add(num1, num2);
    
    cout << "Sum: " << result << endl;
    
    return 0;
}
