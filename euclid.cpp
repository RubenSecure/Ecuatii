#include <iostream>

using namespace std;

int main()
{
    int a, b, r;

    cout << "Introduce primul nr: ";
    cin >> a;

    cout << "Introduce aldoilea nr: ";
    cin >> b;

    r = a % b;

    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    cout << b << endl;
    

    return 0;
}