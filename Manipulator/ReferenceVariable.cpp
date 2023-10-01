#include<iostream>
using namespace std;

int main() {
    int b, &a=b;
    cin>>b;
    cout<<a;
    cout<<a+b;
    a=100;
    cout<<a+b;
    b=2;
    cout<<a<<b;
}