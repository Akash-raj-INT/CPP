#include<iostream>
using namespace std;
class sum
{public:
int a,b,s;
void logic()
{
cout << "value of a is:";
cin >> a;
cout << "value of b is :";
cin >> b;
s = a+b;
cout << "Sum is : " << s;
}
}sum;
int main()
{
sum.logic();
return 0;
}
