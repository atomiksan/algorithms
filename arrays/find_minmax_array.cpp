#include <climits>
#include <iostream>

int main(int argc, char *argv[]) {
  int array[10] = {5, 3, 11, -3, 0, 9, 4, -13, 3, 2};

  int min = INT_MAX;
  int max = INT_MIN;

  for (int i = 0; i < 6; ++i) {
    if (array[i] >= max) {
      max = array[i];
    }
    if (array[i] <= min) {
      min = array[i];
    }
  }

  std::cout << "minimum element in array is " << min << "\n";
  std::cout << "maximum element in array is " << max << "\n";

  return 0;
}
