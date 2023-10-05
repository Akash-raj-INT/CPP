#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1=("akashraj");
    string s2=("sonukumar");

    s1.replace(2,2,s2);
    cout<<"Replace string:"<<s1<<endl;
  
    s1.erase(2,2);
    cout<<"Erase string:"<<s1<<endl;

    s1.append(s2);
    cout<<"Append string:"<<s1<<endl;

    s1.clear();
    cout<<"Cleared string:"<<s1<<endl;
    
    s1.insert(3,s2);
    cout<<"insert string:"<<s1<<endl;

    s1.empty();
    cout<<"empty string:"<<s1<<endl;

    s1.substr(2,2);
    cout<<"substr string:"<<s1<<endl;

    cout<<"find string s1:"<<s1.find("a")<<endl;
    cout<<"rfind string s1:"<<s1.find("a")<<endl;

    s1.clear();
    cout<<"its clear:"<<endl;
    
    s1.empty();
   {
    if(s1.empty())
    {
        cout<<"NOTHING FOUND"<<endl;
    }
    else{
        cout<<s1<<endl;
      }
     }
     
}

