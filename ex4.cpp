#include <iostream>
#include <string>

using namespace std;

int main(){
  int score;
  cout << "What is your score?" << endl;
  cin >> score;
    if(score > 90){
    cout << "You got an A" << endl;
  }
  else if(score > 80){
    cout << "You got a B" << endl;
  }
  else if(score > 70){
    cout << "You got a C" << endl;
  }
  else if(score > 60){
    cout << "You got a D" << endl;
  }
  else{
    cout << "You got an F" << endl;
  }
}