//This version of the program should use overloading to check if the user wants
//to calculate for spheres or cylinders

//This program illustrates the local and global variables and call-by-value.
//This program computes the side area and the cross section area of a cylinder
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159; //This variable is defined globally, known to all functions in the program
const double conversion = 0.3937; //This is the cm to inch conversion factor

double area(double r); //Function declaration for function that computes cross section total_area
double area(double r, double h); //Function declaration for funciton that computes side_area
double surface_area(double r); //Function declaration for function that computes surface area of a circle
double volume(double r); //Function declaration for function that computes volume of a circle
double volume (double r, double h); //Function declaration for function that computes volume of a cylinder

int main(void){

  int choice = 0;
  double h, r; //Variables local to the main functions
  cout << "Would you like to calculate for a cylinder or a sphere?\n";
  cout << "Enter (1) for cylinder or (2) for circle <Enter>: ";
  cin >> choice;

  //When user chooses 1, user is choosing cylinder
  if(choice == 1){
    cout << "Enter the radius and the height of the cylinder in cm <Enter>: ";
    cin >> r >> h;
    cout << endl;
    cout << "Before I do any computation or call any function, I want to let you know that \n";
    cout << "you have entered r = " << r << " and h = " << h<< "." << endl;
    cout << "I am planning to use inch, thus in the first function, I will convert r and " << endl;
    cout << "in the second one I will convert h \n";

    cout << "The cross section area of the cylinder is " << area(r) << " inch-sqr" <<  endl;
    cout << "The side area of the cylinder is " << area(r,h) << " inch-sqr\n";
    cout << "The volume of the cylinder is " << volume(r,h) << " inch-cubed\n\n";

  } else if(choice == 2){
    cout << "Enter the radius of the circle in cm <Enter>: ";
    cin >> r;
    cout << endl;
    cout << "Before I do any computation or call any function, I want to let you know that \n";
    cout << "you have entered r = " << r << endl;
    cout << "I am planning to use inch, thus I will be using a function to convert radius\n";

    cout << "The surface area of the circle is " << surface_area(r) << " inch-sqr" << endl;
    cout << "The volume of the circle is " << volume(r) << " inch-cubed\n\n" << endl;

  } else{

    cout << "\nINVALID_CHOICE_ERROR\n\n";
  }

  return 0;
}

double area(double r){ //Compute cross-section area of a cylinder

  //Cross section area includes the disks at the bottom and the prototyp
  r = r * conversion; //Converting r to inch
  return 2 * PI * pow(r, 2);
}

double area(double r, double h){ //Compute side-area of a cylinder

  double area; //Variable local to Side_area functions
  h = h * conversion; //converting h to inch
  r = r * conversion; //converting r to inch
  area = 2 * PI * r * h;
  return area;
}

double surface_area(double r){ //Compute surface-area of a circle
//We are unable to overload this function due to there already existing another function
//in which the parameter is double r

  double surface_area;
  r = r * conversion;
  surface_area = 4 * PI * pow(r, 2);
  return surface_area;
}

double volume(double r){ //Compute volume of a circle

  double volume;
  r = r * conversion;
  volume = (4.0 / 3.0) * PI * pow(r, 3);
  return volume;
}

double volume(double r, double h){ //Compute volume of a cylinder

  double volume;
  h = h * conversion;
  r = r * conversion;
  volume = PI * (pow(r, 2)) * h;
  return volume;
}
