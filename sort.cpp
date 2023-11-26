#include "sort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>

std::vector<int> Sort::getNumbers(const std::string& filename, int count){
    std::vector<int> numbers;

    std::ifstream inputFile(filename);

    std::string line;
    while(std::getline(inputFile, line)){
        std::istringstream iss(line);
        int num;
        while(iss >> num){
            numbers.push_back(num);
        }
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    std::vector<int> ranNum;
    for(int i = 0; i < count && !numbers.empty(); ++i){
        int index = rand() % numbers.size();
        ranNum.push_back(numbers[index]);
        numbers.erase(numbers.begin() + index);
    }

    return ranNum;
}

void Sort::printList(const std::vector<int>& list){
    for(int num : list){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
