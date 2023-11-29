#include "sort.h"
#include <iostream>

int main(int argc, char* argv[]){
    std::string filename = argv[1];
    std::vector<int> data = Sort::getData(filename);//gets data from file

    std::cout << "Numbers: ";
    Sort::printList(data);
    std::cout << std::endl;

    std::vector<int> insertionSortNumbers = data;//gets original data
    Sort::insertionSort(data);
    std::cout << "Insertion Sort: ";
    Sort::printList(data);
    Sort::runTime(Sort::insertionSort, insertionSortNumbers);
    std::cout << std::endl;

    std::vector<int> quickData = Sort::getData(filename);//gets original data
    std::vector<int> quickSortNumbers = quickData;
    Sort::quickSort(quickSortNumbers);
    std::cout << "Quick Sort: ";
    Sort::printList(quickSortNumbers);
    Sort::runTime(Sort::quickSort, quickSortNumbers);
    std::cout << std::endl;

    std::vector<int> mergeData = Sort::getData(filename);//gets original data
    
    std::vector<int> mergeSortNumbers = mergeData;
    Sort::mergeSort(mergeSortNumbers);
    std::cout << "Merge Sort: ";
    Sort::printList(mergeSortNumbers);
    Sort::runTime(Sort::mergeSort, mergeSortNumbers);
    std::cout << std::endl;

    return 0;
}
