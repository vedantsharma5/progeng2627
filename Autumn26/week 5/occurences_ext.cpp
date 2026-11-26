#include <iostream>
#include <vector>

int main(){
    std::vector<int> list;
    std::vector<int> index;
    int n, s, counter=0;
    std::cout << "enter n" << std::endl;
    std:: cin >> n;

    for(int i=0; i<n ; i++){
        int num;
        std:: cout << "enter number" << std::endl;
        std:: cin >> num;
        list.push_back(num); }

    std::cout << "enter s" << std::endl;
    std:: cin >> s;

    for (int j=0 ; j<(n); j++){
        if (list[j]==s){
            counter++;
            index.push_back(j);
        }
    }

    if (index.size()>0){
         std::cout << "there are " <<counter <<" occurences of " << s << "at" << std::endl;
         for(int k=0 ; (index.size())>k ; k++){
            std::cout << index[k]<< std::endl;
         }
    }
    
    else{
        std::cout << "there are no occurences of " << s << std::endl;
    }
    }
