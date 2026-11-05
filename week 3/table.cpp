#include <iostream>

int main(){
    int n;
    std::cout << "enter number";
    std::cin >> n;

    // for (int row=1; row< n+1; row++){
    //     for(int column=1; column< n+1; column++){
    //         std::cout << row * column << "\t";
    //     }
    //     std::cout << std::endl;
    // }

    int row=1;
    while (row< n+1){
        int column = 1;
        while (column< n+1){
            std::cout << row * column << "\t";
            column++;
        }
        std::cout << std::endl;
        row++;
    }

}