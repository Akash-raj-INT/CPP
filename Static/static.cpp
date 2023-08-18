#include<iostream>
using namespace std;
class student
{
private:
  static int a;
  int roll,marks;
public:
  void input()// use of function in public(function definition)
{
  cout<<"\nenter the roll number\n";
  cin>>roll;
  cout<<"\nenter the marks\n";
  cin>>marks;
 // a++;//static member used inside the class and with other functions also
  }
  void display()// use of function in public(function definition)
  {
 cout<<"\nroll number is"<<roll;
 cout<<"\nmarks are"<<marks;

 }
 static void showcount();// static member function

  
 };
 int student::a=0;//definition of static data member always done outside the class
  void student::showcount()
  {
  //cout<<"variable="<<a<<"\n";
  a++;
  cout<<"\n count: "<<a;
  
  }
 
 main()
 {
student s1,s2,s3;
s1.input();//function call
 student::showcount();//static member function called
 s2.input();
 student::showcount();
s3.input();
student::showcount();
s1.display();
s2.display();
s3.display();

}