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
  int startScan, minIndex;
  int minValue;
  int ctr = 0;

  for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++) {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < NUM_NAMES; index++) {
      if (array[index] < minValue) {
        minValue = array[index];
        minIndex = index;
        ctr++;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
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
