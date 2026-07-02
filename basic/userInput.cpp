#include <iostream>
#include <string>

using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout << "What would you like order in tea? \n";
    getline(cin , userTea);

    // ask for quantity
    cout <<"How many cups of "<< userTea << "would you like to have ? ";
    cin >> teaQuantity;

    cout << "Your order is: "<<endl;
    cout << teaQuantity << " cups of ";
    cout << userTea ;

    return 0 ;

}
