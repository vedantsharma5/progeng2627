#include <iostream>
#include <cmath>

int sumofpowers(int n, int base){
    int sum=0;
    for (int i=0 ; i<n+1; i++){
        sum= std::pow(base,i)+sum;  
    }      
    return sum ;

}
int main(){
    int n , base;
    std::cout << "enter x value" << std::endl;
    std::cin >> base;
    std::cout << "enter the power you wan to sum too" << std::endl;
    std::cin >> n;

    std::cout << "your sum is " << sumofpowers(n,base);

}

    