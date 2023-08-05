#include<iostream>
using namespace std;
class student
{
private:
int roll;
float cgpa;
public:
void info()
{
cout<<"Enter roll no.\n";
cin>>roll;
cout<<"Enter cgpa";
cin>>cgpa;

cout<<"Info are: "<<roll<<" "<<cgpa;
}
};
main(){
student s1 ;
s1.info();//error obj.fnc obj.var
//cin>>s1.roll>>s1.cgpa;//3 6.7
}
