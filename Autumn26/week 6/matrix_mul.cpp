#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

std::vector<std::vector<int>> readfile(const char* filename){
    
    std::ifstream file(filename);

    if (!file.is_open()){
        std::cout<< "couldnt open file";
        std::exit(EXIT_FAILURE);
    }

    std::vector<std::vector<int>> matrix;
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::vector<int> row;
        int number;

        while (ss >> number) {
            row.push_back(number);
        }

        matrix.push_back(row);
    }

    return matrix;
}

std::vector<std::vector<int>> multiplication(const std::vector<std::vector<int>>m1 , const std::vector<std::vector<int>>m2 ){

    

}








int main(int argc,char* argv[]){
    if (argc!=3){
        std::cout<< "needed 2 files";
        std::exit(EXIT_FAILURE);
    }
std::vector<std::vector<int>> m1 = readfile(argv[1]);
std::vector<std::vector<int>> m2 = readfile(argv[2]);
std::vector<std::vector<int>> product = multiplication (m1,m2);




}
