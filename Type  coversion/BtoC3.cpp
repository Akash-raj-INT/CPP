#include<iostream>
using namespace std;

class Distance1
{
private:
int km, m;

public:
Distance1()
{
    km=m=0;
}
Distance1(int d)
{
    km=d/1000;
    m=d*1000;
}
void show_data()
{
    cout<<"Kilometers: "<<km <<"\nmeters: "<<m;
}
};

int main()
{

    int d;
    cout<<"Enter distance: "; 
    cin>>d;
    Distance1 d1;
    d1=d;
    d1.show_data();


return 0;
}