//This problem is about reading data from data.in
//and proccessing it to get a total for each item
//then totalling it and calculating gst
//and then outputting it in a pre determined format
//in the console
//INPUTS: quantity, unitPrice
//INTEMEDIATES: preTaxTotal
//OUTPUTS: Item Number, Unit Price, Quantity, Item Total, GST, Grand Total

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int itemNumber;
double quantity, unitPrice, itemTotal, gst, preTaxTotal, finalTotal;

int main()
{
      ifstream in;
      in.open("C:\\Users\\Brent\\Documents\\Code\\a5\\data.in");

      cout << setw(0) << left << "Item Number";
      cout << setw(24) << right << "Unit Price";
      cout << setw(26) << right << "Quantity";
      cout << setw(28) << right << "Item Total"<< endl;

      itemNumber = 1;

      while(in >> unitPrice >> quantity){
            itemTotal = unitPrice*quantity;
            preTaxTotal = itemTotal+preTaxTotal;
            cout << setw(5) << right << itemNumber++;
            cout << setw(30) << right << fixed << showpoint << setprecision(2) << unitPrice;
            cout << setw(26) << right << int(quantity);
            cout << setw(28) << right << fixed << showpoint << setprecision(2) << itemTotal << endl;
      }

      gst = preTaxTotal*0.05;
      cout << endl;
      cout << setw(57) << right << "GST";
      cout << setw(32) << right << fixed << showpoint << setprecision(2) << gst << endl;

      finalTotal = preTaxTotal+gst;
      cout << endl;
      cout << setw(65) << right << "Grand Total";
      cout << setw(24) << right << fixed << showpoint << setprecision(2) << finalTotal << endl;

      in.close();
      return 0;

}
