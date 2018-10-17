//This is a program that outputs a menu of shapes to a user and gives
//a choice of either a circle, a rectangle, or a triangle.
//Depending on what shape the user chooses, the program will prompt the
//user for the neccesary parameters to calculate the area of the shape.
//The area will then be output.
//INPUTS: shape, radius, width, height
//OUTPUTS: area


#include <iostream>

using namespace std;

int shape;
double radius, width, height, area;

int main(){

      cout << "Shape Menu" << endl;
      cout << "1. Circle" << endl;
      cout << "2. Rectangle" << endl;
      cout << "3. Triangle" << endl;
      cout << "Shape (1, 2, or 3)? ";
      cin >> shape;

      if(shape>=4){
            cout << shape << " is an invalid menu option, program terminated." << endl;
            return 0;
      }
      switch (shape){

            case 1: cout << "Radius? ";
            cin >> radius;
            area = 3.14159*radius*radius;
            cout << "The area of your shape is " << area << " square units.";
            break;

            case 2: cout << "Width? ";
            cin >> width;
            cout << "Height? ";
            cin >> height;
            area = width*height;
            cout << "The area of your shape is " << area << " square units.";
            break;

            case 3: cout << "Base? ";
            cin >> width;
            cout << "Height? ";
            cin >> height;
            area = (width*height)/2;
            cout << "The area of your shape is " << area << " square units.";
            break;

      }

      return 0;
}
