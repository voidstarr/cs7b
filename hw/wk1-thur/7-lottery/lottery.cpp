#include <ctime>
#include <iostream>
#include <stdlib.h>

void printArray(int[5]);
int checkMatching(int[5], int[5]);

int main() {
  srand(time(0));

  int winningDigits[5];
  int playerDigits[5];
  std::cout << "Enter 5 numbers:" << std::endl;

  for (int i = 0; i < 5; i++) {
    winningDigits[i] = (rand() % 9);
    std::cin >> playerDigits[i];
  }

  std::cout << "WinningDigits\t";
  printArray(winningDigits);
  std::cout << "player\t";
  printArray(playerDigits);

  int matching = checkMatching(winningDigits, playerDigits);
  std::cout << matching << " digit" << (matching != 1 ? "s" : "") << " matched!"
            << std::endl;

  return 0;
}

int checkMatching(int a[5], int b[5]) {
  int matching = 0;
  for (int i = 0; i < 5; i++) {
    if (a[i] == b[i])
      matching++;
  }
  return matching;
}

void printArray(int a[5]) {
  for (int i = 0; i < 5; i++) {
    std::cout << a[i];
  }
  std::cout << std::endl;
}
