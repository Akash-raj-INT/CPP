#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	void ip()
	{
		cin>>a>>b;
	}
	protected :

};
class B : public A
{
	
	
	public :
		int c;
		void ip()
		{
			cin>>c;
		}
};
class C : public B
{
	
	public:
		float avg ;
	int s;
		void sum()
	{
		s=a+b+c;
		cout<<s<<endl;
	}
		
	void av()
	{
		avg = s/3;
		cout<<avg;
	}
};
int main()
{

C o1;
o1.ip();
o1.av();
o1.A::ip();
}