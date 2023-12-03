# CSC212 Term Project Fall 2023
# Overview
* Implementations of 4 sorting algorithms
## Insertion
![image](https://github.com/AustinNoon/TermProject/assets/150630356/b6fc8eb1-b9e1-4061-a55f-a8d3e67483a2)
* Look at the first 2 elements of the array and swap if needed until it is in the right place. Then move to the next 2 in the array.
## Merge 
![image](https://github.com/AustinNoon/TermProject/assets/150630356/b012af3c-2ee1-4cf5-a478-b7cf8c6a2b59)
* First you split the array into two halves that are equal
![image](https://github.com/AustinNoon/TermProject/assets/150630356/4b1d4bdc-8bdd-4fcd-86e8-9873290fc5c3)
* Then you split each half and then merge them in order
* The merge the left and right back together in order
## QuickSort
## Bucket Sort
*  Bucket Sort is an algorithm that divides elements in buckets based on their values , subsequently each bucket then gets sorted and lastly all the buckets get concatenates
![image](https://github.com/AustinNoon/TermProject/assets/150630356/da637da7-e57f-498f-bb4a-72461ee91b87)

## Program
## Compile
* g++ main.cpp datasort.cpp -o generator
## Input
* ./generator <file.txt>
## Output
### For each data file inputted, 4 files with be outputted for each algorithm with its sorted list
* InsertionSortedList.txt
* MergeSortedList.txt
* QuickSortedList.txt
* BucketSortedList.txt
## Files Included
* main.cpp
* datasort.cpp
* datasort.h
* random.txt
* reverse.txt
* partial.txt
* sorted.txt
