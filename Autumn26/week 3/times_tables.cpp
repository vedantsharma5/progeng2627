#include <iostream>

using namespace std;

int main(){
    int number, number1,row=1, multiples=1;

    cout << "what timestables do you need";
    cin >> number;
    number1=number;

    while (number>0) {
        cout << row << "\t";
        number=number-1;
        row=row+1;
        multiples= row*number;
        cout << multiples << "\t";

    }


}