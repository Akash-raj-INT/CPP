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
s1.info();
}
