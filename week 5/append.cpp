#include <iostream>
#include <vector>

void append(std::vector<int>&v1 , std::vector<int>v2){
    bool trufal=true; 
    for (int i=0; v2.size()>i ;i++){
        for (int j=0; v1.size()>i ;j++){
            if (v2[i]==v1[j])
                trufal=false; 
          }
        
        if (trufal==true){
            v1.push_back(v2[i]);
        }

     trufal=true;
    }
}
