#include<iostream>
using namespace std;
int main() {

int a[5], i, s=0;
int *p;
for(i=0; i<5; i++){
cout<<"enter the number:";
cin>>a[i];
s=s+a[i];
}
cout<<s;
p=&a[0];
p=p+2;d
cout<< *p<<endl;;
p=p-1;
cout<<*p<<endl;
cout<<p<<endl;
}