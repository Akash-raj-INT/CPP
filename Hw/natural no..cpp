#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Sum of natural numbers up to " << n << " is: " << sum << std::endl;

    return 0;
}

