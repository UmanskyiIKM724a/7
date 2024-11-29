#include <iostream>
using namespace std;

int main() {

    int number; 
    cout << "Enter three digits number: ";
    cin >> number;

    if (number < 100 && number > -100 || number > 999 || number < -999) {
        cout << "ERROR. Please, enter three digits number!";
    }
    else {
        int absNum = abs(number);
        int hundreds = absNum / 100;
        int dozens = (absNum % 100) / 10;
        int units = absNum % 10;

        int max;

        if (hundreds > dozens && hundreds > units) {
            max = hundreds;
        } else if (dozens > hundreds && dozens > units) {
            max = dozens;
        } else {
            max = units;
        }

        char op = max + '0';
        switch (op) {
            case '1': cout << "One";
            break;
            case '2': cout << "Two";
            break;
            case '3': cout << "Three";
            break;
            case '4': cout << "Four";
            break;
            case '5': cout << "Five";
            break;
            case '6': cout << "Six";
            break;
            case '7': cout << "Seven";
            break;
            case '8': cout << "Eight";
            break;
            case '9': cout << "Nine";
        }

    }

}

  // cout << "Hundreds: " << hundreds << "  Dozens: " << dozens << "  Units: " << units << endl;
  // cout << "Hundreds: " << hundreds << endl;
  // cout << "Dozens: " << dozens << endl;
  // cout << "Units: " << units << endl;
