#include<iostream>
using namespace std;

int main() {
    int a, b;
    int c;

    cin>>a;
    cin>>b;
    
    c=b;
    b=a;
    a=c;

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    return 0;
} 
