#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>

class Sort{
public:
  void insertionSort(std::vector<int>& arr);
  void mergeSort(std::vector<int>& arr);
  void quickSort(std::vector<int>& arr);
  void bucketSort(std::vector<int>& arr, int range);

class afterSort{
public:
  std::vector<int> getRanDataSet(const std::vector<int>& nums, int size);
  void printList(const std::vector<int>& list);
  void benchmarkSort(std::vector<int>& arr, const std::string& sortName, void (*sortFunction)(std::vector<int>&));

}
#endif
