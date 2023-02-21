// An example of watching values with gdb
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <random>

int main() {
  // Create random number generator
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution dist(0, 100);

  // Run a performing some calculations
  int sum = 0;
  while (true) {
    // Get a divisor
    auto divisor = dist(mt);

    // Add some value to sum
    // This has a bug! Our random number generator can return 0!
    sum += 10 % divisor;

    // Break out with some condition
    if (sum > 200) break;
  }

  // Print out sum
  std::cout << sum << '\n';
  return 0;
}
