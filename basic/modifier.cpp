#include <iostream>

using namespace std;

int main(){

    unsigned int a = -100 ; // unsigned int can only hold non-negative values, so assigning -100 will result in a large positive value due to underflow.

    long largeTeaStorage = 1000000000; // long can hold larger values than int, suitable for large tea storage.

    short teaSample = 250; // short is used for smaller integer values, suitable for small tea samples.

    cout << "The value of teaSample (short) is: " << teaSample << endl;

    cout << "The value of largeTeaStorage (long) is: " << largeTeaStorage << endl;

    cout << "The value of a (unsigned int) is: " << a << endl;
}