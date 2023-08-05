#include<iostream> 
using namespace std; 
class sum 
{public: 
int a,b; 
int add()//with return type 
{ int s; 
cout << "value of a is:"; 
cin >> a; 
cout << "value of b is :"; 
cin >> b; 
s = a+b; 
return s;// return the value 
} 
void avg(int s); 
}sum1; 
 
void sum::avg(int s) 
{   cout<<" Checking..."; 
	float av=s/2; 
	cout<<"\n avg= "<<av; 
} 
 
int main() 
{ int s; 
s=sum1.add();//var=fnc call 
cout << "Sum is : " << s; 
sum1.avg(s); 
return 0; 
}
