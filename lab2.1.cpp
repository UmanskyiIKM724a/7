#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    int mod = a % b;
    cout << "mod=" << mod << endl;

    if (mod <= 4 && mod >= 0) {
        cout << "The balance is due" << endl;
    }
    else { 
        cout << "The balance is not due" << endl;
    }
}