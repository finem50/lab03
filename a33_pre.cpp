//This C++ program computes the value of 3^4
#include <iostream>
using namespace std;

int main(void){
  int i=0, i2=0, i3=0, i4=0, i5=0;
  int p=1, p2=1, p3=1, p4=1, p5=1;

  int x=3, y=4;
  int x2=2, y2=4;
  int x3=3, y3=3;
  int x4=5, y4=4;
  int x5=4, y5=4;

  while(i<y){
    p=p*x;
    i++;
  }

  while(i2<y2){
    p2=p2*x2;
    i2++;
  }

  while(i3<y3){
    p3=p3*x3;
    i3++;
  }

  while(i4<y4){
    p4=p4*x4;
    i4++;
  }

  while(i5<y5){
    p5=p5*x5;
    i5++;
  }


  cout << x << " to the power of " << y << " is = " << p << endl;
  cout << x2 << " to the power of " << y2 << " is = " << p2 << endl;
  cout << x3 << " to the power of " << y3 << " is = " << p3 << endl;
  cout << x4 << " to the power of " << y4 << " is = " << p4 << endl;
  cout << x5 << " to the power of " << y5 << " is = " << p5 << endl;

  return 0;
}
