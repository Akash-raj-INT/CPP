#include<iostream>
using namespace std;

class base {
    public:
    base()
    {
        cout<<"Constructing base\n";
        virtual ~base()
        {
            cout<<"Destructing base\n";
        }
    };
    class derived1: public base{
        public:
        derived1()
        {
            cout<<"coustructing cerived \n";
        }
        ~derived1()
        {
            cout<<"constructing derived\n";
        }
    }
}