//This program illustrates the local and global variables and call-by-value.
//This program computes the side area and the cross section area of a cylinder
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159; //This variable is defined globally, known to all functions in the program
const double conversion = 0.3937; //This is the cm to inch conversion factor

double area(double r); //Function declaration for function that computes cross section total_area
double area(double r, double h); //Function declaration for funciton that computes side side_area

int main(void){

  double h, r; //Variables local to the main functions

  cout << "Enter the radius and the height of the cylinder in cm <Enter>: ";
  cin >> r >> h;
  cout << endl;
  cout << "Before I do any computation or call any function, I want to let you know that \n";
  cout << "you have entered r = " << r << " and h = " << h<< "." << endl;
  cout << "I am planning to use inch, thus in the first function, I will convert r and " << endl;
  cout << "in the second one I will convert h \n";

  cout << "The cross section area of the cylinder is " << area(r) << " inch-sqr" <<  endl;
  cout << "The side area of the cylinder is " << area(r,h) << " inch-sqr \n\n";

  return 0;
}

double area(double r){

  //Cross section area includes the disks at the bottom and the prototyp
  r = r * conversion; //Converting r to inch
  return 2*PI*pow(r,2);
}

double area(double r, double h){

  double area; //Variable local to Side_area functions
  h = h * conversion; //converting h to inch
  r = r * conversion; //converting r to inch
  area = 2*PI*r*h;
  return area;
}
