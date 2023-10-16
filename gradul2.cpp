#include <iostream>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

bool isNumeric(const string& str) {
    for (char c : str) {
        if (!isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}

int main() {
    float a, b, c, x1, x2, x, delta;
    bool validInput = false;

    do {
        string input;
        cout << "Introduceti coeficientul a: ";
        cin >> input;

        if (!isNumeric(input)) {
            cout << "Va rugam introduceti o valoare numerica valida." << endl;
        } else {
            istringstream ss(input);
            ss >> a;
            validInput = true;
        }
    } while (!validInput);

    validInput = false;

    do {
        string input;
        cout << "Introduceti coeficientul b: ";
        cin >> input;

        if (!isNumeric(input)) {
            cout << "Va rugam introduceti o valoare numerica valida." << endl;
        } else {
            istringstream ss(input);
            ss >> b;
            validInput = true;
        }
    } while (!validInput);

    validInput = false;

    do {
        string input;
        cout << "Introduceti coeficientul c: ";
        cin >> input;

        if (!isNumeric(input)) {
            cout << "Va rugam introduceti o valoare numerica valida." << endl;
        } else {
            istringstream ss(input);
            ss >> c;
            validInput = true;
        }
    } while (!validInput);

    if (a == 0) {
        if (b == 0) {
            cout << "Ecuatie imposibila!";
        } else {
            x = -c / b;
            cout << x;
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta >= 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Solutiile ecuatiei sunt: x1 = " << x1 << " si x2 = " << x2 << endl;
        } else {
            cout << "Fara solutie reala.";
        }
    }

    return 0;
}