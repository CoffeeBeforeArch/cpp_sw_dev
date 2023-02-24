// A simple example of watchpoints in gdb
// By: Nick from CoffeeBeforeArch

int main() {
  // Allocate some memory
  const int N = 1 << 10;
  auto p = new int[N];

  // Set the contents in a for loop
  for (int i = 0; i < N; i++) {
    p[i] = 10;
  }

  // Set the contents in a for loop
  for (int i = 0; i < N; i++) {
    p[i] = 20;
  }

  // Free the memory
  delete[] p;
  return 0;
}
