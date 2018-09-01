//This C++ program computes the value of 3^4
#include <iostream>
using namespace std;

int main(void){
  int i=0, p=1;
  int x=3, y=4;

  while(i<4){
    p=p*x;
    i++;
  }

  cout << x << " to the power of " << y << " is = " << p << endl;

  return 0;
}
