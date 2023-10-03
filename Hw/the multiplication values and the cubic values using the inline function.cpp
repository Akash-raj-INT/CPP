#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    int multiplied = multiply(num, 2); 
    int cubed = cubic(num); 
    
    cout << "Multiplication result: " << multiplied << endl;
    cout << "Cubic value: " << cubed << endl;
    
    return 0;
}
