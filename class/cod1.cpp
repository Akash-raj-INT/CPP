#include<iostream>
using namespace std;

class add
{
public:
    int a, b, s;

    void sum()
    {
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
        s = a + b;
        cout << "sum = " << s;
    }
};

int main()
{
    add s1; // Correctly declare the object 's1' here
    s1.sum();
    return 0; // Add return statement to the main function
}

