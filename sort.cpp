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
   
void Sort::mergeSort(std::vector<int>& list){
    mergeHelper(list, 0, list.size() - 1);//calls mergeHelper
}

void Sort::mergeHelper(std::vector<int>& list, int left, int right){
    if(left < right){//checks if left is smaller than right and keeps halving till one element is left
        int mid = left + (right - left) / 2;//gets middle 

        mergeHelper(list, left, mid);//uses recursion to sort left
        mergeHelper(list, mid + 1, right);//uses recursion to sort right

        merge(list, left, mid, right);//once the two are sorted, it gets merged
    }
}

void Sort::printList(const std::vector<int>& list){
    for(int num : list){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void Sort::quickSort(std::vector<int>& list){ // public method to initiate quickSort on a vector
    quickHelper(list, 0, list.size() - 1); //base parameters for initialization
}

void Sort::quickHelper(std::vector<int>& list, int low, int high){ //helper method for quicksort
    if(low < high){//recursive base case, if low index is less than high index
        int pivotIdx = partition(list, low, high); // find the pivot index through partitioning 
        //recursively sort the subu arrays before and after pivot
        quickHelper(list, low, pivotIdx - 1); // before
        quickHelper(list, pivotIdx + 1, high); // after
    }
}

int Sort::partition(std::vector<int>& list, int low, int high){//partition the vector and return the index of the pivot element 
    int pivot = list(high); // choose the right most element as the pivot
    int i = low - 1; // initialize the index of the smaller element 
    for(int j = low; j <= high - 1; ++j){ //iterate through the elements from low to high - 1
        if(list[j] < pivot){ // if current element is smaller than the pivot
            i++; // increment index of smaller element
        std::swap(list[i], list[j]); // swap current element with element at smaller index 
        }
    }
    std::swap(list[i + 1],list[high]); // swap the pivot element with the element at the next index of the smaller element 
    return i + 1; // return the index of the pivot element
}
