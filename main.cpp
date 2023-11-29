#include "sort.h"
#include <iostream>

int main(int argc, char* argv[]){
    std::string filename = argv[1];
    std::vector<int> ranNumbers = Sort::getNumbers(filename);

    std::cout << "Random Numbers: ";
    Sort::printList(ranNumbers);
    std::cout << std::endl;


    return 0;
}
