#include<iostream>

using namespace std;
class calculation{
    int n;
    static int f;
    public:
        int factorial(){
            cin>>n;
            for (int i = 1; i <= n; i++)
            {
                f = f*i;
            }
            return f;
            

        }
};

int calculation :: f = 1;

int main(){
    calculation c1;
    int s1 = c1.factorial();
    cout<<"Factorial of given number is: "<<s1<<endl;
    return 0;
}