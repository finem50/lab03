//Using while loop this time...

#include <iostream>
#include <cmath>
using namespace std;

int main(void){

  int a, b;

  cout << "Enter two values: \n";
  cout << "Compute: <Enter>: ";
  cin >> a;
  cout << "to the power of <Enter>: ";
  cin >> b;

  double p=pow(a,b);

  cout << a << " to the power of " << b << " is = " << p << endl;

    return 0;
}
