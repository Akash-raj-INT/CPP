#include<iostream>
using namespace std;
int main() {
    int *p;
    {
        int a=10;
        p=&a;
        cout<<"address of a inside block "<<p<<endl;
        cout<<"Value of a inside block "<<*p<<endl;
    }

       cout<<"address of a outside block "<<p<<endl;
        cout<<"Value of a outside block "<<*p<<endl;

        p=NULL;
        cout<<p;

        return 0;
}