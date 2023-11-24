#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>

void insertionSort();
void mergeSort();
void quickSort();
void bucketSort();

void generateDataSet();

template <typename T> 
void benchmarkSort(void(*sortFunc)(T[], int), T arr[], int n, const std::string& algorithmName);

#endif
