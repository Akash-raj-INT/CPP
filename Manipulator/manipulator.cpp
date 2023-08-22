#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int a, b;
float c = 3.1496;
cout<<"Enter number 'a' : ";
cin>>a;
cout<<"Enter number 'b' : ";
cin>>b;
cout<<a<<endl<<b<<endl;
cout<<"Octal Value : "<<oct<<a<<" "<<b<<endl;
cout<<"Hexadecimal Value : "<<hex<<a<<" "<<b<<endl;
cout<<"Octal Value : "<<setbase(8)<<a<<" "<<b<<endl;
cout<<"Hexadecimal Value : "<<setbase(16)<<a<<" "<<b<<endl;
cout<<setw(5)<<a<<endl;
cout<<setfill('*')<<setw(5)<<b<<endl;
cout<<fixed<<setprecision(2)<<c<<endl;
return 0;
}