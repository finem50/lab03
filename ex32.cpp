//Using while loop this time...

#include <iostream>
#include <cmath>
using namespace std;

int main(void){

  int a, b;
  int choice=1;

  while(choice == 1){
  cout << "Enter two values: \n";
  cout << "Compute: <Enter>: ";
  cin >> a;
  cout << "to the power of <Enter>: ";
  cin >> b;

  double p=pow(a,b);

  cout << a << " to the power of " << b << " is = " << p << endl;

  cout << "Would you like to calculate more? Enter 1 for yes, 0 for no: " << endl;
  cin >> choice;
  }

  return 0;
}
