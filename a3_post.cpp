#include <iostream>
#include <cmath>
using namespace std;

int sum(int n1, int n2);

//write these methods bodys
int sum(int n1, int n2, int n3);
int sum(int n1, int n2, int n3, int n4);
int sum(int n1, int n2, int n3, int n4, int n5);
int sum(int n1, int n2, int n3, int n4, int n5, int n6);

int main(){

  cout << "This program will use function overloading to add integers" << endl;

  cout << sum(12, 30) << endl;
  cout << sum(14, 70, 13) << endl;
  cout << sum(11, 40, 23, 33) << endl;
  cout << sum(15, 20, 13, 43, 82) << endl;
  cout << sum(15, 20, 13, 43, 82, 92) << endl;

  return 0;
}

int sum(int n1, int n2){
  return n1 + n2;
}

int sum(int n1, int n2, int n3){
  return n1 + n2 + n3;
}

int sum(int n1, int n2, int n3, int n4){
  return n1 + n2 + n3 + n4;
}

int sum(int n1, int n2, int n3, int n4, int n5){
  return n1 + n2 + n3 + n4 + n5;
}

int sum(int n1, int n2, int n3, int n4, int n5, int n6){
  return n1 + n2 + n3 + n4 + n5 + n6;
}
