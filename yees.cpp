#include <iostream>

using namespace std;

int main() 
{
    int n, i, s;

    cout << "Introduce un numar: ";
    cin >> n;
    cout << endl;

    s = 0;

    for (i =n; i >= 1; i--)
        if (n % i == 0)
        {
            s = s + i;
            cout << i << " ";
        }

        cout << endl << endl <<"SUMA ESTE EGALA CU " << s << endl;
}