#include <iostream>

using namespace std;

int term, termValue, termMinusOneValue, termMinusTwoValue, termLimit;
string tryAgain;

int main(){

      term = 1;
      termValue = 1;
      termMinusOneValue = 1;
      termMinusTwoValue = 1;
      cout << "This is the Fibonacci Sequence mod 10 fact checker." << endl;
      cout << "How many terms do you wish to check? ";
      cin >> termLimit;
      while(term<=termLimit){

            if(term>2){

                  termValue = termMinusOneValue + termMinusTwoValue;
                  termMinusTwoValue = termMinusOneValue;
                  termMinusOneValue = termValue;

            }

            cout << term << ":" << (termValue)%10;
            if(term%3==0){
                  cout << "- even";
            }
            if(term%5==0){
                  cout << "- divisible by 5";
            }
            if(term%15==0){
                  cout << "- is zero";
            }
            cout << endl;
            term++;

      }

      cout << "Would you try again (Y/N)?";
      cin >> tryAgain;

      if(tryAgain=="Y"){
            main();
      }
      return 0;

}
