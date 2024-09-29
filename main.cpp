#include <cstdlib>
#include <iostream>

/** @file
 * @brief Brief explanation of this file
 *
 * This is a detailed explaination of this file
 */

#include "my_add.hpp"

/**
 * @brief Main function
 *
 * Checks for EXACTLY two arguements entered,
 * as
 */
int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Provide exactly 2 arguments\n";
    return 1;
  }

  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);
  std::cout << my_add(a, b) << '\n';
  return 0;
}
