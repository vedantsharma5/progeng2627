#include <iostream>

void sorting(int& num1 , int& num2 , int& num3){
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

int main(){
    int num1, num2 , num3 ;
    std::cout << "enter 3 random numbers ";
    std::cin >> num1 >>num2 >> num3;

    sorting(num1,num2,num3);

    std::cout << num1 << num2 << num3;

}