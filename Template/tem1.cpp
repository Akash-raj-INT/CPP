#include<iodtream>
using namespace std;

template<class T>
void display(T x){
    cout<<"Template display: "<<x<endl;
}
template<class t1, class t2, class t3>
void display(t1 x, t2 y, t3 z)
{
    cout<<"Template display: "<<x<<" "<<y<<" "<<z<<"\n";
}

void display (int x)
{
    cout<<"Explicit display: "<<x<<endl;
}

void display (char y)
{
    cout<<""
}

int main()
{
    
}