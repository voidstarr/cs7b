#define MONKEYS 3
#define DAYS_IN_WEEK 7
#include <iostream>

int feed_schedules[MONKEYS][DAYS_IN_WEEK];
std::string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                  "Thursday", "Friday", "Saturday"};

int average(int[DAYS_IN_WEEK]);
int most(int[MONKEYS][DAYS_IN_WEEK]);
int least(int[MONKEYS][DAYS_IN_WEEK]);


int main() {
    for (int i = 0; i < MONKEYS; i++) {
        std::cout << "enter feed schedule for monkey #" << (i+1) << std::endl;
        for (int j = 0; j < DAYS_IN_WEEK; j++) {
            std::cout << days[j] << ": ";
            std::cin >> feed_schedules[i][j];
        }
    }

    for (int i = 0; i < MONKEYS; i++) {
        std::cout << "monkey #" << (i+1) << " ate an average amount of " << average(feed_schedules[i]) << std::endl; 
    }
    std::cout << "the least amount eaten was " << least(feed_schedules) << std::endl;
    std::cout << "the greatest amount eaten was " << most(feed_schedules) << std::endl;

}

int average(int m[DAYS_IN_WEEK]) {
    float average = 0;
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        average += m[i];
    }
    return average / DAYS_IN_WEEK;
}

int least(int m[MONKEYS][DAYS_IN_WEEK]) {
    int least = 100000000;
    for (int i = 0; i < MONKEYS; i++) {
        for (int j : m[i]) {
            if (j < least)
                least = j;
        }
    }
    return least;
}

int most(int m[MONKEYS][DAYS_IN_WEEK]) {
    int most = 0;
    for (int i = 0; i < MONKEYS; i++) {
        for (int j : m[i]) {
            if (j > most)
                most = j;
            }
        }
    return most;
}

