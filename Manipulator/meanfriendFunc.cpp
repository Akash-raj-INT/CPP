#include<iostream>
using namespace std;
class B;
class A
{
int a;
public: void ipA ()
{
cin>>a;
}

friend void mean(A,B);
}aa;

class B
{
int b;
public: void ipB ()
{
cin>>b;
}

friend void mean(A,B);
}bb;


void mean( A aa, B bb )
{
cout<<(aa.a + bb.b)/2;
}

main()
{
aa.ipA();
bb.ipB();

mean(aa, bb);
}