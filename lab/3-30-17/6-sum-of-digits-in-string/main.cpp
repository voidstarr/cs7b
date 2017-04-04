#include <iostream> 
#include <cstring>

int main() {
    std::cout << "enter a number no spaces." << std::endl << ">> ";
    
    const int LEN = 50;
    char *input;
    char *digit = new char[1];
    std::cin.getline(input, LEN);

    int sum = 0;
    int i = 0;

    while (input[i] != '\0') {
        digit[0] = input[i];
        sum += atoi(digit);
        i++;
    }

    std::cout << "the sum of the digits of " << input << " is " << sum << std::endl;
    
    return 0;
}


