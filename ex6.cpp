#include <iostream>
#include <string>

using namespace std;

int main(){
  int i,ctr,cub;
  cout << "\n\n Display the cube of the numbers upto a given integar: \n";
  cout << "------------------------------------------------------------\n";
  cout << "Enter the number of the terms: ";
  //Example: ctr = 5;
  cin >> ctr;
  for (i = 1; i <= ctr; i++){
    cub = i * i * i;
    cout << "Number is : " << i;
    cout << " and the cube of: " << i << " is: "<< cub << endl;
  }
  return 0;
}