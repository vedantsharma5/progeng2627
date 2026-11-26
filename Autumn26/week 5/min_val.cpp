#include <iostream>
#include <vector>

int min_val(std::vector<double>list){
    double minval=list[0];
    int index=0;
    for(int i=0 ;list.size()>i ;i++){
        if (minval>list[i]){
            minval=list[i];
            index=i; } }
    return index;
 }

 int main (){
    std::vector<double> list = {3, 2 ,1};
    std::cout << min_val(list);

 }