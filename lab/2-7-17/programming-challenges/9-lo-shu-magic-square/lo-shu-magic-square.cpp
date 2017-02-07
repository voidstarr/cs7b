#include <iostream>

void printSquare(int[3][3]);
bool isMagicSquare(int[3][3]);
void validateMagic(int[3][3]);


int main() {
  int magic[3][3] = {{4, 9, 2}, 
                     {3, 5, 7}, 
                     {8, 1, 6}};
  
  int notMagic[3][3] = {{4,2,0},
                        {7,1,0},
                        {5,5,5}};

  validateMagic(magic);
  validateMagic(notMagic);

  return 0;
}

void validateMagic(int s[3][3]) {
printSquare(s);

  if (isMagicSquare(s)) {
          std::cout << "is a magic square!" << std::endl;
            } else {
                    std::cout << "is not a magic square. :[" << std::endl;
                      }
}

void printSquare(int s[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << s[i][j] << "  ";
    }
    std::cout << std::endl;
  }
}
bool isMagicSquare(int s[3][3]) {
  for (int i = 0; i < 3; i++)
    if ((s[i][0] + s[i][1] + s[i][2]) != 15 &&
        (s[0][i] + s[1][i] + s[2][i]) != 15)
      return false;

  if ((s[0][0] + s[1][1] + s[2][2]) != 15 &&
      (s[0][2] + s[1][1] + s[2][0]) != 15)
      return false;

  return true;
}
