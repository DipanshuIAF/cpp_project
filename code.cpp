#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    int a, b, sum, diff, product, quotient, remainder;
    
    // Input values
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Arithmetic operations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    // Output results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Conditional statement
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }

    // Loop example
    cout << "Counting from 1 to " << a << ":" << endl;
    for (int i = 1; i <= a; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
