#include <iostream>
using namespace std;

int main(void){

  int i=0, p=1;
  int a=2, b=4;

  while(i < b){ //Computing 2^4
    p=p*a;
    i++;
  }
  cout << a << " to the power of " << b << " is = " << p << endl;

  i=0;
  p=1;
  a=3, b=3;

  while(i < b){ //Computing 3^3

    p=p*a;
    i++;
  }
  cout << a << " to the power of " << b << " is = " << p << endl;

  i=0;
  p=1;
  a=5, b=4;

  while(i < b){ //Computing 5^4

    p=p*a;
    i++;
  }
  cout << a << " to the power of " << b << " is = " << p << endl;

    return 0;
}
