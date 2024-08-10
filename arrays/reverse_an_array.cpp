#include <iostream>

int main(int argc, char *argv[]) {
  int arr[10] = {10, 3, 2, 6, 4, 7, 9, 8, 1, 5};

  std::cout << "reverse by linear method using a second array\n";
  int rev[10];
  for (int i = (sizeof(arr) / sizeof(arr[0]) - 1); i >= 0; --i) {
    rev[9 - i] = arr[i];
  }
  std::cout << "Original Array:\n";
  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  std::cout << "Reversed Array:\n";
  for (int i = 0; i < 10; ++i) {
    std::cout << rev[i] << " ";
  }
  return 0;
}
