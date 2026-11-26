#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    std::vector<std::string> input; 

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE; }
    
    std::string tmp;

    while(infile>>tmp){
        input.push_back(tmp); }

    std::ofstream outfile;
    outfile.open("out.txt");
    
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE; }

    for (int i= input.size()-1 ; i>0 ; i--){
       outfile << input[i] << " ";
    }

}