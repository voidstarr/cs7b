#include <iostream>
#define NUM_TICKETS 10

int linearSearch(const int[NUM_TICKETS], int, int);
void bubbleSort(int[NUM_TICKETS], int);
int binarySearch(const int[NUM_TICKETS], int, int);

int main() {

  int tickets[NUM_TICKETS] = {13579, 26791, 26792, 33445, 55555,
                              62483, 77777, 79422, 85647, 93121};

  bool goodInput = false;
  int winningNumber = 0;
  std::cout << "Enter this week's five digit winning lottery number: ";
  while (!goodInput) {
    std::cin >> winningNumber;
    if (!(winningNumber < 100000 && winningNumber > 9999) && (std::cin)) {
      std::cout << "Bad input. Try again: ";
      continue;
    } else {
      goodInput = true;
    }
  }

  int pos = -1;
  if ((pos = linearSearch(tickets, NUM_TICKETS, winningNumber)) >= 0) {
    std::cout << "Linear: One of the tickets is a winner! idx:" << pos
              << std::endl;
  } else {
    std::cout << "Linear: No tickets held that value" << std::endl;
  }

  bubbleSort(tickets, NUM_TICKETS);

  if ((pos = binarySearch(tickets, NUM_TICKETS, winningNumber)) >= 0) {
    std::cout << "Binary: One of the tickets is a winner! idx:" << pos
              << std::endl;
  } else {
    std::cout << "Binary: No tickets held that value" << std::endl;
  }

  return 0;
}

int linearSearch(const int arr[NUM_TICKETS], int size, int val) {
  for (int i = 0; i < size; i++)
    if (arr[i] == val)
      return i;
  return -1;
}

int binarySearch(const int arr[NUM_TICKETS], int size, int val) {
  int start = 0;
  int end = size - 1;
  int mid = -1;
  bool found = false;

  while (!found && start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == val) {
      found = true;
    } else if (arr[mid] < val) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return found ? mid : -1;
}

void bubbleSort(int arr[NUM_TICKETS], int size) {
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
