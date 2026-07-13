#include <iostream>
using namespace std;

int sum(int a , int b){
    int sum ;
    sum = a + b;
    return sum;
}

int product(int a , int b){
    int product = a * b;
    return product;
}

int main(){
    int x , y;
    cout<<"Enter two integer whoose sum you want to find: ";
    cin>>x>>y;
    int sumResult = sum(x,y);
    cout<<"sum is : "<<sumResult<<endl;
    int c ,d ;
    cout<<"Enter two integer whoose product you want to find : ";
    cin>>c>>d;
    int productResult = product(c,d);
    cout<<"product is : "<<productResult<<endl;



}