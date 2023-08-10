#include <iostream>
using namespace std;
class operation
{
    int a,b,add;
    public:
    void get()
    {
        cout<<"Enter the value:";
        cin>>a;
        cout<<"Enter second value:";
        cin>>b;
    }
    void sum();
}s;
inline void operation :: sum()
{
    add = a+b;
    cout<<"addition of the two number:"<<a+b;
}


int main()
{
    s.get();
    s.sum();
    return 0;
}