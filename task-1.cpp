#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::set<int> uniqueSet(arr.begin(), arr.end());
    return std::vector<int>(uniqueSet.begin(), uniqueSet.end());
}

int main() {
    std::vector<int> arr = {4, 5, 6, 4, 2, 6, 1, 2};
    std::vector<int> result = removeDuplicates(arr);

    std::cout << "Уникальные элементы: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
