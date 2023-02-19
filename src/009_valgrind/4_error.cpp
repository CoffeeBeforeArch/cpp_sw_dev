// An example of reading unitialized values
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <iostream>
#include <random>

int main() {
  // Create some arrays
  int N = 1 << 10;
  float *a = new float[N];
  float *b = new float[N];

  // Create a random number generator
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution dist(0.0f, 1.0f);

  // Generate some random numbers
  std::generate(a, a + N - 1, [&] { return dist(mt); });
  std::generate(b, b + N - 1, [&] { return dist(mt); });

  // Do vector addition
  for (int i = 0; i < N; i++) {
    a[i] = a[i] + b[i];
  }

  // Print the final result
  std::cout << a[N - 1] << '\n';

  // Free our memory
  delete[] a;
  delete[] b;
  return 0;
}
