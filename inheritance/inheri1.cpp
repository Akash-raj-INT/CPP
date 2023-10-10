#include<iostream>
using namespace std;

class A
{
    public: int a,b,s;
    void ip()
    {

        cout<<"enter a and b: ";
        cin>>a>>b;
        
    }
    protected: void sum()
    {
        s=a+b;
        cout<<s;
    }
};
    class B:protected A
    {
        float av;
        public:
        
        void avg()
        {
            ip();
            sum();
            av=s/3;
            cout<<av;

        }
    };

main()
{
B o1;
o1.avg();

}