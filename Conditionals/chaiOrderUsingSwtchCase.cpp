#include <iostream>

using namespace std;

int main(){

    int choice ;
    double price;

    cout << "Select your tea\n";
    cout << "1 . Green Tea\n";
    cout << "2. Lemon Tea \n";
    cout << "3. Oolong Tea \n";
    cout << "4. Black Tea \n";
    cout << "Enter your choice in numbers: \n";
    cin >> choice;

    switch( choice ){

        case 1:
            price = 2.0;
            cout << "You selected Green Tea . Price : " << price << endl;
            break;
        case 2:
            price = 2.5;
            cout << "You selected Lemon Tea . Price : " << price << endl;
            break;
        case 3:
            price = 4.5;
            cout << "You selected Oolong Tea . Price : " << price << endl;
            break;
        case 4:
            price = 3.0;
            cout << "You selected Black Tea. Price : " << price << endl;
            break;
        default:
            cout << "Invalid Choice "<< endl;
    }
    return 0 ;
}