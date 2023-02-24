// An example of debugging with watchpoints in GDB
// By: Nick from CoffeeBeforeArch

#include <cassert>
#include <iostream>
#include <random>

// Set values in an array to ones
void ones(int *array, int N) {
  for (int i = 0; i < N; i++) array[i] = 1;
}

// Set values in an array to random numbers
// This has a bug!
void random(int *array, int N) {
  std::random_device rd;
  for (int i = 0; i < N; i++) array[i] = rd();

  // A little special assignment for us :^)
  array[1028] = rd();
}

int main() {
  // Allocate some memory
  const int N = 1 << 10;
  auto p_random = new int[N];
  auto p_ones = new int[N];

  // Set the contents of that memory
  ones(p_ones, N);
  random(p_random, N);

  // Check that the array is all ones
  for (int i = 0; i < N; i++) {
    if (p_ones[i] != 1) {
      std::cout << "Incorrect values at index " << i << "! " << p_ones[i]
                << '\n';
      assert(false);
    }
  }
  return 0;
}
