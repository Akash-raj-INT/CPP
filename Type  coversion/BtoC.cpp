#include<iostream>
using namespace std;

class time
{
    int hrs;
    public:
    time(int t)
       {
        hrs=t/60;
        cout<<hrs;
       }
    };
    int main()
    {
        time t1(85);
        return 0;

    
}