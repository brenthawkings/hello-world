//This problem is about the converion from imperial lengths to metric lengths
//I have designed an algorithm that does just that
//INPUTS: Feet and Inches
//OUTPUTS: Meters and Centimeters

#include "pch.h"
#include <iostream>

using namespace std;

double feet, inches, centimeters; 
int meters;

int main()
{
	cout << "Enter the height in feet and inches (separated by a space):";
	cin >> feet;
	cout << " ";
	cin >> inches;
	inches = inches + (feet * 12);
	centimeters = inches * 2.54;
	meters = centimeters / 100;
	centimeters = round(fmod(centimeters, 100));
	cout << meters;
	cout << " Meter(s) ";
	cout << centimeters;
	cout << " Centimeter(s)";
}
