#define MAX_VAL 300
#include <iostream>

void larger_than(int[MAX_VAL], int, int);

int main() {

  int size = 0;

  int arr[MAX_VAL];

  std::cout << "enter the size of the array\n>>> ";
  std::cin >> size;

  std::cout << "enter the numbers for the array" << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << (i + 1) << ". ";
    std::cin >> arr[i];
  }

  int n = 0;
  std::cout << "enter 'n'\n>>> ";
  std::cin >> n;

  larger_than(arr, size, n);
}

void larger_than(int ar[MAX_VAL], int s, int n) {
  for (int i = 0; i < s; i++) {
    if (ar[i] > n)
      std::cout << ar[i] << " ";
  }
  std::cout << std::endl;
}
