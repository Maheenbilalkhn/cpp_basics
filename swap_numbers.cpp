#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping using temp variable:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping without temp variable:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
