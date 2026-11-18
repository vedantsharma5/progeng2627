#include <iostream>
#include <vector>

int main(){
    std::vector<int> list;
    int n, s, counter=0;
    std::cout << "enter n" << std::endl;
    std:: cin >> n;

    for(int i=0; i< (n+1) ; i++){
        int num;
        std:: cout << "enter number" << std::endl;
        std:: cin >> num;
        list.push_back(num); }

    std::cout << "enter s" << std::endl;
    std:: cin >> s;

    for (int j=0 ; j<(n+1); j++){
        if (list[j]==s){
            counter++ ;
        }
    }

    std::cout << "there are " <<counter <<" occurences of " << s << std::endl;  }
