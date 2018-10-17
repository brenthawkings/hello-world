//This problem is about finding a users "magic number"
//Separates the digits of a users age
//Then multiplies those digits tgether and
//raises them to the power of the sum of the digits
//I used the math.h library to use fmod and pow
//INPUTS: age
//INTERMEDIATES: ageTens, ageOnes
//OUTPUTS: magicNum


#include <iostream>
#include <math.h>

using namespace std;

int age, ageTens, ageOnes;
double magicNum;

int main()
{
    cout << "What is your age in years?";
    cin >> age;
    ageOnes = fmod(age,10);
    ageTens = (age - ageOnes)/10;
    magicNum = pow((ageTens*ageOnes),(ageTens+ageOnes));
    cout << "Your magic number is " << magicNum << "." << endl;
    return 0;
}
