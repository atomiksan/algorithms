#include <iostream>

int main(int argc, char *argv[]) {
  int arr[10] = {10, 6, 4, 3, 9, 2, 0, 22, 7, 8};
  int val = 2;

  for (int i = 0; i < 10; ++i) {
    if (arr[i] == val) {
      std::cout << i;
      break;
    }
  }
  return 0;
}
