#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a, b, c;
    cout << "Enter a, b, c " << endl;
    cin >> a >> b >> c;
    
    float startX, endX;
    cout << "Please enter x range: " << endl;
    cin >> startX >> endX;

   for (double x = startX; x <= endX; x += 1) {
        float F;
        if (c < 0 && b != 0) {
       F = a * x * x + b * b * x;
        }
     else if (c > 0 && b == 0) {
       F = (x + a) / (x + c);
        }
        else {
       F = x / c;
        }
    cout << "x: " << x << " F(x): " << F << endl;
    }
}