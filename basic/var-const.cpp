#include <iostream>

using namespace std;

int main() {
    const int x = 10; // Declare a constant integer
    int y = 5;        // Declare a regular integer

    cout << "The value of x (constant) is: " << x << endl;
    cout << "The value of y (variable) is: " << y << endl;

    // Uncommenting the next line will cause a compilation error
    // x = 20; // Error: assignment of read-only variable 'x'

    y = 15; // This is allowed since y is not a constant
    cout << "The new value of y (variable) is: " << y << endl;

    return 0;
}