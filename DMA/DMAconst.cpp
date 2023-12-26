#include<iostream>
using namespace std;

class A {
      int *p;
      public: void logic()
      {
        A();
      {
      cout<<"constructor calling: "<<endl;
      p=new int;
      cout<<"enter p: ";
      cin>>*p;
      cout<<*p;
       }
    }
};

main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    A *o1=new A[n];
    o1->logic();

}