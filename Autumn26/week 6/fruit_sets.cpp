#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

void commonlist(std::vector<std::string>&common, std::vector<std::string>warehouse_1, std::vector<std::string>warehouse_2){
    
    int length1=warehouse_1.size() , length2=warehouse_2.size();
    
    if (length1>length2 || length1==length2){
        for (int i=0 ; i<warehouse_1.size();i++){
            for (int j=0 ; j<warehouse_2.size();j++){
                if(warehouse_1[i]==warehouse_2[j]){
                    common.push_back(warehouse_1[i]);
                }
            }
        }
    }

    else{
        for (int i=0 ; i<warehouse_2.size();i++){
            for (int j=0 ; j<warehouse_1.size();j++){
                if(warehouse_2[i]==warehouse_1[j]){
                    common.push_back(warehouse_2[i]);
                
                }
            }
        }   
    }
}


void intersectionlist(std::vector<std::string>&intersection, std::vector<std::string>warehouse_1, std::vector<std::string>warehouse_2, const std::vector<std::string>common){

intersection=common;

for( int i=0 ; i<warehouse_1.size() ; i++){
    int b=1;
    for ( int j=0 ; j<common.size() ; j++){
        if (warehouse_1[i]==common[j]){
            b=0;
            break;
        }
    }
    if (b==1){
        intersection.push_back(warehouse_1[i]);
    }
    b=1;
}

for( int i=0 ; i<warehouse_2.size() ; i++){
    int b=1;
    for ( int j=0 ; j<common.size() ; j++){
        if (warehouse_2[i]==common[j]){
            b=0;
            break;
        }
    }
    if (b==1){
        intersection.push_back(warehouse_2[i]);
    }
    b=1;
}

}
 
int main(){

std::vector<std::string>warehouse_1;
std::vector<std::string>warehouse_2;
std::vector<std::string>common;
std::vector<std::string>intersection;

std::string temp;

std::ifstream warehouse1;
warehouse1.open("warehouse1.txt");

if(!warehouse1.is_open()){ 
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
    }

std::ifstream warehouse2;
warehouse2.open("warehouse2.txt");

if(!warehouse2.is_open()){ 
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
    }


while (warehouse1>>temp){
    warehouse_1.push_back(temp);
}
while (warehouse2>>temp){
    warehouse_2.push_back(temp);
}

commonlist(common, warehouse_1, warehouse_2);
intersectionlist(intersection, warehouse_1, warehouse_2,common);


for (int i=0 ; i< common.size() ; i++){
    std::cout << common[i]<< std::endl;
}

for (int i=0 ; i< intersection.size() ; i++){
    std::cout << std::endl << intersection[i] << std::endl;
}
}
