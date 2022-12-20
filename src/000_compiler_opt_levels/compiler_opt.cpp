// A simple program that modifies the contents of a vector
// By: Nick from CoffeeBeforeArch

#include <vector>

int main() {
    // Create a vector of 2^28 elements (0s)
    auto num_elements = 1 << 28;
    std::vector<int> vector(num_elements);

    // Modulo each value by 20
    for(auto &value : vector) {
        value %= 20;
    }
}
