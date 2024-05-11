#include <iostream>
#include <string>
using namespace std;

int main(){
  int num,r,sum=0,t;
  cout << "Enter a number: ";
  cin >> num;
  for (t = num; num != 0; num = num / 10) {
    r = num % 10;
    sum = sum + r;
  }
  cout << "The new number after operate is : " << sum << endl;
  return 0;
}