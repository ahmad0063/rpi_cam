#include <iostream>
#include <vector>
#include <string>
#include <numeric>

// Simple function to compute factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to compute average of numbers
double average(const std::vector<int>& nums) {
    if (nums.empty()) return 0.0;
    return static_cast<double>(std::accumulate(nums.begin(), nums.end(), 0)) / nums.size();
}

int main() {
    std::cout << "=== Debug Test Program ===" << std::endl;

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Check factorial of a number
    int n = 5;
    int fact = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact << std::endl;

    // Calculate average
    double avg = average(numbers);
    std::cout << "Average of numbers is " << avg << std::endl;

    // Print numbers with loop
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "=== End Program ===" << std::endl;

    return 0;
}
