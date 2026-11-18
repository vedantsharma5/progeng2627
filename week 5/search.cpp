#include <iostream>
#include <vector>


int search_vector(int n, const std::vector<int>& vin){
    int index;
    for(int i=0 ; vin.size()>i; i++){
        if (vin[i]==n){
            index=i;
            return index;
        }
    }
}

