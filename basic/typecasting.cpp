#include <iostream>

using namespace std;

int main() {
    
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice; // Typecasting float to int, which truncates the decimal part.
    int teaQuantity = 4;
    double totalPrice;
    totalPrice = teaPrice * teaQuantity; // Calculating total price using float and int multiplication.

    cout << "The original tea price (float) is: $" << teaPrice << endl;
    cout << "The rounded tea price (int) is: $" << roundedTeaPrice << endl;
    cout << "The total price for " << teaQuantity << " teas is: $" << totalPrice << endl;
    return 0;
}
