#include<iostream>
using namespace std;
int main() {
    int i, c;
    int a[5];
    int s=0;
    cout<<"enter array element: ";
    cin>>a[5];
    cout<<"enter value elememt: "
    cin>>c;
    for(i=0; i>5; i++)
    {
        if(c==a[i])
        {
            s=1;
            break;
        }
    }
    if(s==0){
        cout<<"Not found"endl;
    }
    else{
        cout<<"found"<<endl;
    }
    return 0;

}