#define NUM_SCORES 20
#include <iostream>

int countPerfect();

int scores[NUM_SCORES];

int main() {
    int score = 0;

    std::cout << "enter up to 20 integers, between 0 and 100, representing test scores." << std::endl
              << "enter a negative number to finish entering, before 20 numbers have been entered" << std::endl;

    for (int i = 0; i < NUM_SCORES; i++) {
        std::cin >> score;
        if (score > 100) {
           std::cout << "score must be less than 100!" << std::endl;
           return -1;
        } else {
            scores[i] = score;
        }
    }

    int perfect = countPerfect();
    std::cout << "You entered " << perfect << " perfect scores." << std::endl;
    return 0;
}

int countPerfect() {
    int perfect = 0;
    for(int i : scores) {
        if (i == 100) {
            perfect++;
        }
    }
    return perfect;
}
