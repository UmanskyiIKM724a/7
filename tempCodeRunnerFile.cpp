#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of number 'n': ";
    cin >> n;

    if (n == 0) {
        cout << "ERROR." << endl;
    }

    else {
    int product = 1;
    int i = 1;
    while (i <= abs(n)) {
        if (n % i == 0) {
            product *= i;
        }
        i++;
    }
    cout << "Products of divisors: " << product << endl;
    }
}