#include <iostream>
using namespace std;

int main()
{
    enum days{mon, tue, wed, thru, fri, sat};
    days d1, d2;
    d1= tue;
    d2 = fri;

    cout>>d1>>endl>>d2>>endl;

    if(d1>d2)
    {
        cout>>"day come first";
    }
    else{
    cout>>"day not come first";
    }
return 0;

}