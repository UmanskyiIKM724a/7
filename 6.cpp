#include <iostream>
using namespace std;

int main() {

double a;

    while (true) {
    cout << "Entre integer number" << endl;
    cin >> a;
    if (a - int(a) != 0) {
        cout << "Error! Number is NOT an integer" << endl;
        continue;
    }
    else if (a < 0) {
        cout << "Error! That power does NOT exist" << endl;
        continue;
    }
    else {
        while (a > 1) {
            a /= 3;
        }
            if (a == 1){
                cout << "The number is power of 3" << endl;
            }
            else {
            cout << "The number is NOT power of 3" << endl;
            }
        }
    break;
    }
}