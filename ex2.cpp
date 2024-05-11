#include <iostream>
#include <string >

using namespace std;

int main(){
  int num ;
  cout << "Enter a number: ";
  cin >> num;
  cout << "Enter the symbols: ";
  string symbols;
  cin >> symbols;
  for (int i = 0; i < num;  i++){
     for (int j = 0; j < num; j++){
      cout << symbols;
    }
    cout << "\n";
  }
}