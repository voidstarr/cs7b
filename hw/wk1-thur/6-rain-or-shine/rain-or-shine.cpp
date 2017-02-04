#include <fstream>
#include <iostream>
#include <string>

// const definitions
const char RAINY = 'R';
const char CLOUDY = 'C';
const char SUNNY = 'S';

const int JUNE = 0;
const int JULY = 1;
const int AUGUST = 2;
// end const definitions

// function prototypes
void readData(char[3][30]);
void printData(char[3][30]);

int main() {
  char data[3][30];
  readData(data);
  printData(data); 
  return 0;
}

void printData(char w[3][30]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 30; j++) {
            std::cout << w[i][j];
        }
        std::cout << std::endl;
    }
}

void readData(char w[3][30]) {
  std::ifstream inData("RainOrShine.dat");
  std::string line;
  if (inData.is_open()) {
    int month = 0;
    while (getline(inData, line)) {
      //std::cout << line << std::endl;
      for (int i = 0; i < line.length(); i++) {
        w[month][i] = line[i];
      }
      month++;
    }
  } else {
    std::cout << "can't open file" << std::endl;
  }
}
