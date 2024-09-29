#include <benchmark/benchmark.h>

#include "my_add.hpp"

// The benchmark function
static void BenchMyAdd(benchmark::State& state) {
  for (auto _ : state) {
    benchmark::DoNotOptimize(my_add(1, 2));
  }
}

// Register the benchmark
BENCHMARK(BenchMyAdd);

// Run the benchmark
BENCHMARK_MAIN();
