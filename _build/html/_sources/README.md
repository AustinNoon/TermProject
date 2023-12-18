# CSC212 Term Project Fall 2023
# Overview
* Implementations of 4 sorting algorithms
## Insertion
![image](https://github.com/AustinNoon/TermProject/assets/150630356/2b890e21-591b-4bec-b5e5-f43b90638615)

* Move value by value in the list comparing the current value with the one directly to it's right. If it is out of order, move the current value one index to the right and repeat this process with the value being compared and all values to the left until it has either reched the index 0 or passes the comparison. Continue doing this until the list data has been fully traversed.
## Merge 
![image](https://github.com/AustinNoon/TermProject/assets/150630356/b012af3c-2ee1-4cf5-a478-b7cf8c6a2b59)
* First you split the array into two halves that are equal
  
![image](https://github.com/AustinNoon/TermProject/assets/150630356/4b1d4bdc-8bdd-4fcd-86e8-9873290fc5c3)

* Then you split each half and then merge them in order
* The merge the left and right back together in order
## QuickSort
![image](https://github.com/AustinNoon/TermProject/assets/150630356/15b0ba26-0d8e-4b73-81f7-700bfd485f18)

## Bucket Sort
*  Bucket Sort is an algorithm that divides elements in buckets based on their values, subsequently each bucket then gets sorted and lastly all the buckets get concatenates

![image](https://github.com/AustinNoon/TermProject/assets/150630356/da637da7-e57f-498f-bb4a-72461ee91b87) 
* Insertion sort is applied to each bucket
* All the buckets get concatenated
## Program
* Takes in a text file through CLA
* File will either be ordered randomly, reverse, partially, or already sorted
  * Each file with be different in sizes
* When passed through, data will be put into a list and sorted by each of the four algorithms
* Run time for each algorithm is printed in terminal
* Sorted data will be outputted to 4 different files
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
### Terminal
![image](https://github.com/AustinNoon/TermProject/assets/150630356/ff8cc4f8-db45-4caf-bfd1-3738acf53ad4)
## Files Included
* main.cpp
* datasort.cpp
* datasort.h
* random.txt
* reverse.txt
* partial.txt
* sorted.txt
