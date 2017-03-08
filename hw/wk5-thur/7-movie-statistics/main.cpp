#include <iostream>
#include <cmath>

float average(int*, int);
float median(int*, int);
int mode(int*, int);
void printArr(int*, int);
void sort(int*, int);

int main() {
    std::cout << "how many students surveyed? ";
    int students = 0;
    std::cin >> students;
    int* movies = new int[students];
    std::cout << "enter the number of movies for each student." << std::endl;
    for (int i = 0; i < students; i++) {
        int numMovies = 0;
        std::cout << "student " << (i + 1) << ": ";
        std::cin >> *(movies + i);
    }
    sort(movies, students);
    std::cout << std::endl;
    printArr(movies, students);
    std::cout << std::endl
              << "average number of movies watched: " << average(movies, students) << std::endl
              << "median of this set: " << median(movies, students) << std::endl;
    float md = mode(movies, students);
    std::cout << "mode of this set: ";
    if (md == -1){
        std::cout << "no mode" << std::endl;
    } else {
        std::cout << md << std::endl;
    }
  return 0;
}

float average(int* m, int s) {
    float ave = 0;
    for (int i = 0; i < s; i++) {
        ave += *(m + i);
    }
    return ave / s;
}

float median(int* m, int s) {
    int i = std::ceil(s/2) - 1;
    float med = *(m + i);
    if (s % 2 == 0) {
        med += *(m + i + 1);
        med /= 2;
    }
    return med;
}

int mode(int* m, int s) {
    int retMode = *m;
    int num = retMode;
    int modeCount = 1;
    int count = 1;

    for (int i = 1; i < s; i++) {
        if (retMode == *(m + i)) {
            count++;
        } else {
            if (count > modeCount) {
                modeCount = count;
                retMode = num;
            }
        }
    }

    if (modeCount == 1)
        return -1;

    return retMode;
}

void sort(int* m, int s) {
    int i, j;
    for (i = 0; i < s-1; i++) {
        int min = i;
        for (j = i+1; j < s; j++) {
            if (*(m + j) < *(m + min))
                min = j;
        }
        if (min != i)
            std::swap(*(m + i), *(m + min));
    }
}

void printArr(int* m, int s) {
    for (int i = 0; i < s; i++) {
        std::cout << *(m + i) << " ";
    }
    std::cout << std::endl;
}
