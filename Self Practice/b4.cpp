#include <iostream>
using namespace std;
​
int main() {
  int myAge = 25;
  int votingAge = 18;
​
  if (myAge >= votingAge) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }
  return 0;
}
​
Old enough to vote!