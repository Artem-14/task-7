#include <iostream>
#include <vector>
#include <climits>

int maxSubArraySum(const std::vector<int>& arr) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int num : arr) {
        currentSum = std::max(num, currentSum + num);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArraySum(arr);

    std::cout << "Максимальная сумма подмассива: " << result << std::endl;

    return 0;
}
