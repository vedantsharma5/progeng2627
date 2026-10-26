#include <iostream>
using namespace std;

int main () {


    int integer, remainder;

    cout<< "give me and integer i'll tel you if its even or odd " ;
    cin>> integer ;

    remainder=integer%2 ;

    if (remainder>0){
        cout<< "your number is odd";
    }

    else{
        cout<<"your number is even";
    }
    }

