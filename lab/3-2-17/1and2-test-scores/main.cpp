#include <iostream>

void sortAsc(int *, int);
float average(int *, int);
void printScores(int *, int);

int main() {
  int numScores;
  std::cout << "please enter number of test scores: ";
  std::cin >> numScores;
  int *scores = new int[numScores];
  for (int i = 0; i < numScores; i++) {
    std::cout << "score " << (i + 1) << ": ";
    std::cin >> *(scores + i);
    if (*(scores + i) < 0) {
      i--;
      std::cout << "non-negative numbers pl0x!" << std::endl;
    }
  }

  sortAsc(scores, numScores);

  std::cout << "average score: " << average(scores, numScores) << std::endl << std::endl;

  printScores(scores, numScores);

  delete[] scores;
  return 0;
}

void sortAsc(int *scores, int size) {
  int i, j, min;
  for (i = 0; i < size - 1; i++) {
    min = i;
    for (j = i + 1; j < size; j++) {
      if (*(scores + j) < *(scores + min)) {
        min = i;
      }
    }
    if (min != i)
      std::swap(*(scores + i), *(scores + min));
  }
}

void printScores(int *scores, int size) {
  for (int i = 0; i < size; i++) {
    if (i % 5 == 0)
      std::cout << std::endl;
    std::cout << *(scores + i) << " ";
  }
  std::cout << std::endl;
}

float average(int *scores, int size) {
  float average = 0;
  for (int i = 0; i < size; i++) {
    average += *(scores + i);
  }
  return average / size;
}
