#include <iostream>
using namespace std;

int main(void){

  int x, y;
  cout << "Enter 2 values for x and y separated by space, then press <Enter>: ";
  cin >> x >> y;
  cout << endl;

  cout << "With type casting on x " << x << "/" << y << " = " << static_cast<float>(x)/y << endl;
  //Just to show you that the type for x is reset back to int again
  cout << "Right after type casting " << x << "/" << y << " = " << x/y << endl;

  return 0;
}
