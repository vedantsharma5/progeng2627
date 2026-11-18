#include <iostream>
#include <vector>

int min_val(std::vector<double>list){
    double minval=0;
    int index=0;
    for(int i=0 ;list.size()>i ;i++){
        if (minval>list[i]){
            minval=list[i];
            index=i; } }
    return index;
 }

 int main (){
    
 }