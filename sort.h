#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>

class Sort{
public:
    static std::vector<int> getNumbers(const std::string& filename);
    static void printList(const std::vector<int>& list);
    static void insertionSort(std::vector<int>& list);
    static void quickSort(std::vector<int>& list);
    static void mergeSort(std::vector<int>& list);
    static void bucketSort();
    static void runTime(void(*sortFunction)(std::vector<int>&), std::vector<int>& list);
private: 
    static void quickHelper(std::vector<int>& list, int low, int high);
    static int partition(std::vector<int>& list, int low, int high);
    static void merge(std::vector<int>& list, int left, int mid, int right);
    static void mergeHelper(std::vector<int>& list, int left, int right);
};

#endif 
