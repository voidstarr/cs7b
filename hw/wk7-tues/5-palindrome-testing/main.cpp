#include <iostream>

bool isPalindrome(std::string);

int main() {
  while (true) {
    std::cout << "Enter a word or phrase." << std::endl << ">> ";
    std::string line;
    std::getline(std::cin, line);
    if (isPalindrome(line)) {
      std::cout << "is a palindrome." << std::endl;
    } else {
      std::cout << "is not a palindrome." << std::endl;
    }
  }
  return 0;
}

bool isPalindrome(std::string p) {
  int j = p.length() - 1;
  for (int i = 0; i < j; i++, j--) {
    if (std::tolower(p[i]) != std::tolower(p[j])) {
      return false;
    }
  }
  return true;
}
