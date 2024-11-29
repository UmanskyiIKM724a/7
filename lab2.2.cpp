#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float alpha;
    cout << "Enter the alpha value " << endl;
    cin >> alpha;
    
    float rad = alpha * M_PI / 180.0;

    float z1 = cos(rad) + cos(2 * rad) + cos(6 * rad) + cos(7 * rad);
    cout << "z1 = " << z1 << endl;

    float z2 = 4 * cos(rad / 2) * cos((5/2) * rad) * cos(4 * rad);
    cout << "z2 = " << z2 << endl;

}
