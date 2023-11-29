#include "sort.h"
#include <iostream>

int main(int argc, char* argv[]){
    std::string filename = argv[1];
    std::vector<int> ranNumbers = Sort::getNumbers(filename);

    std::cout << "Random Numbers: ";
    Sort::printList(ranNumbers);
    std::cout << std::endl;

    std::vector<int> insertionSortNumbers = ranNumbers;
    Sort::insertionSort(ranNumbers);
    std::cout << "Insertion Sort: ";
    Sort::printList(ranNumbers);
    Sort::runTime(Sort::insertionSort, insertionSortNumbers);
    std::cout << std::endl;

    std::vector<int> ranNumbers2 = Sort::getNumbers(filename);
    
    std::vector<int> quickSortNumbers = ranNumbers2;
    Sort::quickSort(quickSortNumbers);
    std::cout << "Quick Sort: ";
    Sort::printList(quickSortNumbers);
    Sort::runTime(Sort::quickSort, quickSortNumbers);
    std::cout << std::endl;

    std::vector<int> ranNumbers3 = Sort::getNumbers(filename);
    
    std::vector<int> mergeSortNumbers = ranNumbers3;
    Sort::mergeSort(mergeSortNumbers);
    std::cout << "Merge Sort: ";
    Sort::printList(mergeSortNumbers);
    Sort::runTime(Sort::mergeSort, mergeSortNumbers);
    std::cout << std::endl;

    return 0;
}
