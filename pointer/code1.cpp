#include<iostream>
using namespace std;
void fun(int*);
int main(){
	int i = 10;
	fun((&i)++;
	}
void fun(int *p)
{
 cout<<*p;
}
