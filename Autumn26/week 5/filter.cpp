#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i=0 ;vin.size()>i ; i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}