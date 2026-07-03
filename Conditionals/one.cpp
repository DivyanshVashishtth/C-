#include <iostream>

using namespace std;

int main(){
    int age ;

    cout  << "Enter Your age : " ;
    cin >> age ;
    if (age >= 18)
    {
        cout << "You can have a driving lisence."<<endl;

    }else{
        cout << "you are under age of driving lisence" << endl;
    }
    return 0 ;
}