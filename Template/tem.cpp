#include<iostream>
using namespace std;

template<typename T1, typename T2>
void multiply(T1 num1, T2 num2)
{
    cout<<num1*num2;
}
int main()
{
    int num1=3;
    float num2=4.5;
    cout<<"\n Product of num1*num2=";
    multiply<int, float>(num1, num2);
    cout<<endl;

    multiply<int, int>(4,5);
    return 0;
}