#include <chrono>


//function to benchmark the chosen sorting algorithm
template <typename T>
void benchmarkSort(void(*sortFunction)(T[], int), T arr[], int n, const std::string& algorithmName){
    auto start = std::chrono::high_resolution_clock::now();

    //call the sorting algorithm
    sortFunction(arr, n);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Algorithm: " << algorithmName << "\n";
    std::cout << "Time taken by function: " << duration.count() << "microseconds\n\n";#
}
