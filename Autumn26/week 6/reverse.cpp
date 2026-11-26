#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>



int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    for (int index=v.size()-1 ; index>-1 ; index--){
         std::cout<<v[index] << std::endl ;
    }
       
}


