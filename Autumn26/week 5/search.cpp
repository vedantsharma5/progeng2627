#include <iostream>
#include <vector>


int search_vector(int n, const std::vector<int>& vin){
    int index=-1;
    for(int i=0 ; vin.size()>i; i++){
        if (vin[i]==n){
            index=i;
            break;
        }
    }
    return index;
}


int main(){
    std::vector <int> vin = {0,1,0,1,0,0};
    int n=5;
    std::cout << search_vector(n, vin );

}

