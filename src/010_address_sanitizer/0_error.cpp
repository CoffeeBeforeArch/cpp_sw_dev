// An example program with an out of bound index
// By: Nick from CoffeeBeforeArch

#include <array>

#include <iostream>

int main() {
  // Create an array of 5 integers
  std::array<int, 4> my_array = {42, 3, 39, 4};

  // A for loop with an off-by-one error
  for (auto i = 0u; i <= my_array.size(); i++) {
    std::cout << my_array[i] << '\n';
  }

  return 0;
}
