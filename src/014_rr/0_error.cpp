// An example of debugging with rr
// By: Nick from CoffeeBeforeArch

#include <iostream>
#include <random>

int main() {
  // Create random number generator
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution dist(1, 100);

  // Perform some calculations
  int sum = 0;
  while (true) {
    // Get a divisor
    auto divisor = dist(mt);
    
    // Might result in 0!
    divisor -= 5;

    // Add some value to sum!
    sum += 10 % divisor;

    // Break out with some condition
    if (sum > 200) break;
  }

  // Print out sum
  std::cout << sum << '\n';
  return 0;
}
