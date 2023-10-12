#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b;
    
    cout << "Introduceti coeficientul a: ";
    cin >> a;
    
    cout << "Introduceti coeficientul b: ";
    cin >> b;
    
    if (a == 0) {
        if (b == 0) {
            cout << "Ecuatia are infinitate de solutii." << endl;
        } else {
            cout << "Ecuatia nu are solutii." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Solutia ecuatiei " << a << "x + " << b << " = 0 este x = " << x << endl;
    }
    
    return 0;
}
