##include <iostream>
#include <iomanip>
using namespace std;

void area(float r) 
{
    float area =3.14*r*r;
    cout<<"area of circle: ", <<area<<endl;
};

void area(int l, int b)
{
    int areaofRect=l*b;
    cout<<"area of rect: ", <<areaofRect;<<endl;
};
int main () {
    area(3);
    area(3,5);

    return 0;
}

