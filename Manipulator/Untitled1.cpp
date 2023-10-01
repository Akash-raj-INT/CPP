#include<iostream>
using namespace std;
class A
{
      int a,b;
      public: void ip()
      {
      	cin>>a>>b;
	  }
             
    friend void sum(A);
}ob;
                   
                   void sum( A o )
                   {
                      
                      cout<<o.a+o.b;
                        }
                        
                        main()
                        {
                             ob.ip();
                             sum(ob);
                              }
