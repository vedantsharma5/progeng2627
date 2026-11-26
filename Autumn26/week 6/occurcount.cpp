#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

void occurences(std::vector<std::string>checklist, std::vector<std::string>text){
int counter=0;

for(int i=0 ; i<checklist.size() ; i++){
    counter=0;
    for (int j=0 ; j<text.size() ; j++){
        if (checklist[i]==text[j]){
            counter++;
        }
    }

std::cout<<checklist[i]<<": "<< counter <<std::endl;
}
}

int main(){

std::vector<std::string>checklist;
std::vector<std::string>text;

std::ifstream maintext;
maintext.open("maintext.txt");

if(!maintext.is_open()){ 
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE; }
    
std::string tmp;

while(maintext>>tmp){
    text.push_back(tmp); }

std::ifstream words;
words.open("words.txt");

if(!words.is_open()){ 
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE; }
    
while(words>>tmp){
    checklist.push_back(tmp);
}

occurences(checklist, text);

}