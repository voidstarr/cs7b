#include <iostream>

void bubbleSort(int[], int);
int linearSearch(const int[], int, int);
int binarySearch(const int[], int, int);

int main() {
  int numbers[20] = {36, 25, 18, 46, 26, 15, 49, 67, 30, 44,
                     58, 59, 39, 68, 22, 77, 21, 88, 74, 13};

  int count = linearSearch(numbers, 20, 22);
  std::cout << "linear search: interations(" << count << ") " << std::endl;

  count = binarySearch(numbers, 20, 22);
  std::cout << "binary search: interations(" << count << ") " << std::endl;

  return 0;
}

int linearSearch(const int arr[], int size, int val) {
  int ret = -1;
  int ctr = 0;
  for (int i = 0; i < size; i++) {
    ctr++;
    if (val == arr[i]) {
      ret = i;
    }
  }
  //int a[2] = {ret, ctr};
  return ctr;
}

int binarySearch(const int arr[], int size, int val) {
  int start = 0;
  int end = size - 1;
  int mid = -1;
  bool found = false;

  int ctr = 0;

  while (!found && start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == val) {
      found = true;
    } else if (arr[mid] < val) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    ctr++;
  }
  //int a[2] = {found ? mid : -1, ctr};
  return ctr;
}

void bubbleSort(int arr[], int size) {
  bool swapped = true;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        std::swap(arr[i], arr[i + 1]);
        swapped = true;
      }
    }
  }
}
