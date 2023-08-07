#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;

    int first = 0, second = 1, next;

    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }

    std::cout << std::endl;

    return 0;
}

