#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>

class Sort{
public:
    static std::vector<int> getNumbers(const std::string& filename);
    static void printList(const std::vector<int>& list);
};

#endif 
