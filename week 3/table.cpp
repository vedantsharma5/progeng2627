#include <iostream>

int main(){
    int n;
    std::cout << "enter number";
    std::cin >> n;

    for (int row=1; row< n+1; row++){
        for(int column=1; column< n+1; column++){
            std::cout << row * column << "\t";
        }
        std::cout << std::endl;
    }


}