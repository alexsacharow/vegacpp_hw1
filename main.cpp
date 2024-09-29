#include <cstdlib>
#include <iostream>

#include "my_add.hpp"

/**
 * @brief This function accepts two arguements and returns their sum.
 * @return Sum of two integers.
 */
int main(int argc, char *argv[]) {
  if (argc != 3) {
    // @brief Check for exactly 2 arguements entered.
    std::cerr << "Provide exactly 2 arguments\n";
    return 1;
  }
  // @brief Accept 2 arguements from standard input
  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);
  std::cout << my_add(a, b) << '\n';
  return 0;
}
