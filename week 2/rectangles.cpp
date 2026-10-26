#include <iostream>

int main() {

double width, length,area,permimeter  ;

std::cout << "what is the length:" ;
std:: cin >> length ;

std::cout << "what is the width:" ;
std:: cin >> width ;

area=width*length;
permimeter=(2*length)+(2*width);

std:: cout<<"area is:" <<area << std::endl <<"perimeter is:" << permimeter;

}