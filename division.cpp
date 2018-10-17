//This is a program that helps users recognize  whether a positive
//integer less than 100 is divisible by 2,3,5, and 9.
//This requires the number that is submitted to be split into its
//ones place and its tens place, and those valuues can be used to
//check if a number is divisible.
//This program will terminate with an error message if the submitted
//integer is greater than or equal to 100.
//INPUTS: num
//INTERMEDIATES: ones, tens, sumOfDigits
//OUTPUTS: The results of the calculations of whether or not the
//integer is divisible by 2,3,5, and 9.


#include <iostream>
#include <math.h>

using namespace std;

int num, ones, tens, sumOfDigits;

int main(){

      cout << "Enter a positive integer less than 100: ";
      cin >> num;
      cout << endl;

      if (num>=100){
          cout << "Error " << num << " is too large! PROGRAM TERMINATED";
          return 0;
      }

      ones = fmod(num,10);
      tens = (num-ones)/10;

      //Checks if a number is divisible by 2
      if (ones==0 || ones==2 || ones==4 || ones==6 || ones==8){
            cout << "A number is only divisible by 2 if it ends in a 0, 2, 4, 6, or 8." << endl;
            cout << "Since " << num << " has " << ones << " in the ones column, we know it is divisible by 2." << endl;
      }else {
            cout << "A number is only divisible by 2 if it ends in a 0, 2, 4, 6, or 8." << endl;
            cout << "Since " << num << " has " << ones << " in the ones column, we know it is not divisible by 2." << endl;
      }

      cout << endl;

      sumOfDigits = tens+ones;

      //Checks if a number is divisible by 3
      if (fmod(sumOfDigits,3)==0){
            cout << "Since the sum of the digits of " << num << " is " << sumOfDigits << " which is divisible by 3," << endl;
            cout << num << " is divisible by 3." << endl;
      }else {
            cout << "Since the sum of the digits of " << num << " is " << sumOfDigits << " which is not divisible by 3," << endl;
            cout << num << " is not divisible by 3." << endl;
      }

      cout << endl;

      //Checks if a number is divisible by 5
      if(ones==0){
            cout << "All numbers ending in 0 are divisible by 5, so " << num << " is divisible by 5." << endl;
      }else if(ones==5){
            cout << "All numbers ending in 5 are divisible by 5, so " << num << " is divisible by 5." << endl;
      }else {
            cout << "All numbers that do not end with a 0 or 5 are not divisible by 5," << endl;
            cout << "so " << num << " is not divisible by 5." << endl;
      }

      cout << endl;

      //Checks if a number is divisible by 9
      if(sumOfDigits==9){
            cout << "All positive integers less than 100 with digits that sum to 9 are" << endl;
            cout << "divisible by 9. So, " << num << " is divisible by 9." << endl;
      }else{
            cout << "All positive integers less than 100 with digits that do not sum to 9" << endl;
            cout << "not divisible by 9. So, " << num << " is not divisible by 9." << endl;
      }

      return 0;
}
