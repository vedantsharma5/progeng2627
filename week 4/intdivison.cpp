#include <iostream>

void div(int num1, int num2,  int& quoteint , int& remain){
    quoteint=num1/num2;
    remain=num1 % num2;
    
}

int main(){
    int num1 ,num2  , quotient , remain;
    std::cout << "enter 2 num";
    std::cin >> num1 >> num2;
    div(num1,num2,quotient,remain);
    std::cout << "quo " << quotient << std::endl;
    std::cout << "rem " << remain;

}