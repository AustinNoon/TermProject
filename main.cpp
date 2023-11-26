#include "sort.h"
#include <iostream>

int main(int argc, char* argv[]){
    std::string filename = argv[1];
    std::vector<int> ranNumbers = Sort::getNumbers(filename, 10);

    std::cout << "Random Numbers: ";
    Sort::printList(ranNumbers);

    return 0;
}
