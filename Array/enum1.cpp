#include <iostream>
using namespace std;

main()
{
    enum days{sun, mon, tue, wed=40, thru, fri, sat};
     days d1, d2, d3;
     d1 = sun;
     d2 = wed;
     d3 = fri;

     cout<<d1<<endl<<d2<<endl<<d3<<endl;
     return 0;
}