#include <iostream>

void leapyear(int year){

    if ((year%400==0) || (year%4 ==0) && (year%100 !=0)){
        std::cout << "leap year";
    }
    else{
        std::cout << "no leap year";
    }
}
int main(){
    int year;
    std::cout << "enter year";
    std::cin >> year;
    leapyear(year);

}