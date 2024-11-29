#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of number 'n': ";
    cin >> n;

    if (n == 0) {
        cout << "ERROR. There is no product of divisors!" << endl;
    }

    else {
    int product = 1;
    int a = 1;
    while (a <= n) {
        if (n % a == 0) {
            product = product * a;
        }
        a = a + 1;
    }
    cout << "Products of divisors: " << product << endl;
    }
}