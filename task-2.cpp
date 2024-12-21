#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result(arr1.size() + arr2.size());
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), result.begin());
    return result;
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8};
    std::vector<int> result = mergeSortedArrays(arr1, arr2);

    std::cout << "Объединённый отсортированный массив: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
