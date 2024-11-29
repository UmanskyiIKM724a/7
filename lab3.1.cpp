
#include <iostream>
using namespace std;

int main() {

    float a, b, c;
    cout << "Enter 3 negative numbers" << endl;
    cout << "a = " ;
    cin >> a;
    cout << "b = " ;
    cin >> b;
    cout << "c = " ;
    cin >> c;

    float maxNumber;
    if (a < 0 && b < 0 && c < 0) {
        if (a >= b && a>= c) {
          maxNumber = a;
        }
        else if (b >= a && b>= c) {
           maxNumber = b;
        }
        else if (c >= a && c>= b) {
           maxNumber = c;
        }
        float cube = maxNumber * maxNumber * maxNumber;
        cout << "The largest number is - " << maxNumber << endl;
        cout << "Cube of the number is - " << cube << endl;
    }
    else {
        cout << "Please, enter only negative numbers!" << endl;
    }
}