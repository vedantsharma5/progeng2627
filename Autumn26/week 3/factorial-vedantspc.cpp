#include <iostream>
using namespace std;

int main(){

    int number,product=1;

    cout << "what number would you like to know the factorial of? ";

    cin >> number;

    while (number>0){
        product=product*number;
        cout << product << endl ;  
        number=number-1;
    }

    cout << "the factorial is: " << product;

}