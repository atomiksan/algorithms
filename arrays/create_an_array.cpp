#include <iostream>
#include <stdio.h>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 6};
  std::cout << "Enter the index of array element \n";

  int element;

  std::cin >> element;

  std::cout << "\n" << v[element];

  return 0;
}
