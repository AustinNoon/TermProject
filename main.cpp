#include "sort.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<int> getNumbers(const std::string& fname){
    std::vector<int> num;
    std::ifstream infile(fname);

    int x;
    while(infile >> x){
        num.push_back(x);
    }
    
    infile.close();
    return num;
}

int main(int argc, char*argv[]){
    std::ifstream ifs(argv[1]);
   
}
