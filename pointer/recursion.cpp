#include <iostream>
#include <string>
using namespace std;

namespace sd {
    string reverseName(const std::string& name, int index = 0) {
       
        if (index == name.length()) {
            return "";
        }

    
        return reverseName(name, index + 1) + name[index];
    }
}

int main() {
    string name = "RAM";
    string reversedName = sd::reverseName(name);
    cout << reversedName << endl;  

    return 0;
}
