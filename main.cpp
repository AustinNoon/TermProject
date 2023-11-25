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
    std::vector<int> dataBase = getNumbers(argv[1]);//gets data base 

    srand(time(nullptr));
    for(int i = dataBase.size() - 1; i > 0; i--){//keeps random
        
    }

    int s = 10;//size of list(amou tof numbers taken from database)
}
