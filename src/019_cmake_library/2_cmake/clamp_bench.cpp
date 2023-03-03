// Benchmarks for compiler optimizations of a clamp function
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <random>
#include <vector>

#include "benchmark/benchmark.h"

// Benchmark for a clamp function
// std::vector + std::transform
static void clamp_bench_lambda(benchmark::State &s) {
  // Number of elements in the vector
  auto N = 1 << s.range(0);

  // Create our random number generators
  std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<int> dist(0, 1024);

  // Create a vector of random integers
  std::vector<int> v_in(N);
  std::vector<int> v_out(N);
  std::generate(begin(v_in), end(v_in), [&]() { return dist(rng); });

  // Our clamp function
  auto clamp = [](int in) { return (in > 512) ? 512 : in; };

  // Main benchmark loop
  for (auto _ : s) {
    std::transform(begin(v_in), end(v_in), begin(v_out), clamp);
  }
}
BENCHMARK(clamp_bench_lambda)->DenseRange(8, 10);

BENCHMARK_MAIN();
