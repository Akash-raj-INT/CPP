#include <iostream>
using namespace std;

class Circle {
public:
    // static data member for PI
    static const double PI;

    // static member function to calculate the area
    static double calculateArea(double radius) {
        return PI * radius * radius;
    }
};

// Initialize the static data member
const double Circle::PI = 3.141592653589793;

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    double area = Circle::calculateArea(r);
    cout << "Area of the circle with radius " << r << " is: " << area << endl;

    return 0;
}