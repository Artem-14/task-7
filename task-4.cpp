#include <iostream>
#include <vector>
#include <algorithm>

void rearrangeEvenOdd(std::vector<int>& arr) {
    std::partition(arr.begin(), arr.end(), [](int num) { return num % 2 == 0; });
}

int main() {
    std::vector<int> arr = {3, 1, 2, 4, 7, 6, 5, 8};
    rearrangeEvenOdd(arr);

    std::cout << "Перестановка: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
