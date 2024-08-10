#include <iostream>
#include <utility>

int main(int argc, char *argv[]) {
  int arr[10] = {1, 9, 3, 6, 8, 10, 4, 2, 7, 5};
  std::cout << "reverse an array using swap method\n";
  std::cout << "original array\n";
  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
  int i = 0;
  int j = int(sizeof(arr) / sizeof(arr[0])) - 1;
  int temp;
  while (i < j) {
    std::swap(arr[i], arr[j]);
    ++i;
    --j;
  }
  std::cout << "\n";
  std::cout << "reversed array\n";
  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
