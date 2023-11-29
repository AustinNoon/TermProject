#include "sort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iomanip>

std::vector<int> Sort::getNumbers(const std::string& filename){
    std::vector<int> numbers;

    std::ifstream inputFile(filename);

    int num;
    while(inputFile >> num){
        numbers.push_back(num);
    }

    return numbers;
}
   


void Sort::printList(const std::vector<int>& list){
    for(int num : list){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
