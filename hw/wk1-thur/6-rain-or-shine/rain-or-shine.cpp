#include <fstream>
#include <iostream>
#include <string>

// const definitions
const char weather[3] = {'R', 'C', 'S'};
const std::string weather_s[3] = {"Rainy", "Cloudy", "Sunny"};
const std::string months[3] = {"June", "July", "August"};
// end const definitions

// function prototypes
void readData(char[3][30]);
void printData(char[3][30]);
int countDays(char[3][30], int, char);
void weatherReport(char[3][30]);
// end function prototypes

int main() {
  char data[3][30];

  readData(data);
  // printData(data);
  weatherReport(data);

  return 0;
}

void weatherReport(char w[3][30]) {
  for (int i = 0; i < 3; i++) {
    std::cout << months[i] << " weather:" << std::endl;
    std::cout << "Rainy\tCloudy\tSunny" << std::endl;
    for (int j = 0; j < 3; j++) {
      std::cout << countDays(w, i, weather[j]) << "\t";
    }
    std::cout << std::endl << std::endl;
  }
}

int countDays(char w[3][30], int month, char weather_type) {
  int count = 0;
  for (char c : w[month]) {
    if (c == weather_type)
      count++;
  }
  return count;
}

void printData(char w[3][30]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 30; j++) {
      std::cout << w[i][j];
    }
    std::cout << std::endl;
  }
}

void readData(char w[3][30]) {
  std::ifstream in_data("RainOrShine.dat");
  std::string line;
  if (in_data.is_open()) {
    int month = 0;
    while (getline(in_data, line)) {
      // std::cout << line << std::endl;
      for (int i = 0; i < line.length(); i++) {
        w[month][i] = line[i];
      }
      month++;
    }
  } else {
    std::cout << "can't open file" << std::endl;
  }
}
