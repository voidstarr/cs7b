#include <ctime>
#include <iostream>
#include <random>
#include <iomanip>

template <class T> void quickSort(T *, int, int);
template <class T> void print(T *, int);

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "need SIZE! pass argument to program!" << std::endl;
    return -1;
  }
  srand(time(0));
  int SIZE = std::stoi(argv[1]);
  double *a = new double[SIZE];
  for (int i = 0; i < SIZE; i++)
    a[i] = 100 * double(rand()) / double(rand());


  std::cout << "UNSORTED:" << std::endl;
  print(a, SIZE);

  quickSort(a, 0, SIZE - 1);

  std::cout << std::endl << std::endl 
            << "SORTED:" << std::endl;
  print(a, SIZE);

  delete[] a;
  return 0;
}

template <class T> void print(T arr[], int size) {
  for (int i = 0; i < size; i++){
      if((i+1) % 10 == 0){
          std::cout << std::endl;
      }
      std::cout << arr[i] << std::setw(4);
  }
  std::cout << std::endl;
}

template <class T> void quickSort(T *arr, int left, int right) {
  int i = left, j = right;
  T tmp;
  T pivot = arr[(left + right) / 2];

  /* partition */
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };

  /* recursion */
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}
