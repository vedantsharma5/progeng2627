#include <iostream>
using namespace std;

int main(){
    int n, product=1;
    std::cout << "Enter a number: ";
    cin >> n;

    // for (int i=0;i!=n ;){
    //     product=n*product;
    //     n=n-1;
    // }

    // for (int i=n; i>0; i--) {
    //     product *= i;
    // }

    for (int i=1; i < n + 1; i++) {
        product *= i;
    }
    cout << product;
}