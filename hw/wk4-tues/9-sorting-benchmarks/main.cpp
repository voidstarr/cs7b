#include <iostream>

int selectionSort(int[], int);
int bubbleSort(int[], int);

int main() {
  int first_arr[20] = {36, 25, 18, 46, 26, 15, 49, 67, 30, 44,
                       58, 59, 39, 68, 22, 77, 21, 88, 74, 13};
  int second_arr[20] = {36, 25, 18, 46, 26, 15, 49, 67, 30, 44,
                        58, 59, 39, 68, 22, 77, 21, 88, 74, 13};

  int count = selectionSort(first_arr, 20);
  std::cout << "selection sort swap count: " << count << std::endl;

  count = bubbleSort(second_arr, 20);
  std::cout << "bubble sort swap count: " << count << std::endl;

  return 0;
}

int selectionSort(int array[], int NUM_NAMES) {
  int i, minIndex;
  int ctr = 0;

  for (i = 0; i < (NUM_NAMES - 1); i++) {
    minIndex = i;
    for (int j = i + 1; j < NUM_NAMES; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
        ctr++;
      }
    }
    if (i != minIndex) {
        std::swap(array[minIndex], array[i]);
    }
  }
  return ctr;
}

int bubbleSort(int arr[], int size) {
  bool swapped = true;
  int ctr = 0;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        std::swap(arr[i], arr[i + 1]);
        swapped = true;
        ctr++;
      }
    }
  }
  return ctr;
}
