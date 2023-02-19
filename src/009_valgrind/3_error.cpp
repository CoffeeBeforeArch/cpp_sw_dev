// An example with a use-after-free bug
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
  std::generate(a, a + N, [&] { return dist(mt); });
  std::generate(b, b + N, [&] { return dist(mt); });

  // Do vector addition
  for (int i = 0; i < N; i++) {
    a[i] = a[i] + b[i];
  }

  // Free our memory
  delete[] a;
  delete[] b;

  // Read memory after it has been freed
  std::cout << a[0] << '\n';
  std::cout << b[0] << '\n';
  return 0;
}
