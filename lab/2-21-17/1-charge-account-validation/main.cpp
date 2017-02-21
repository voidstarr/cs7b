#include <iostream>
#define NUMBER_OF_ACCOUNTS 18


const int accounts[NUMBER_OF_ACCOUNTS] = {5658845, 8080152, 1005231, 4520125, 4562555, 6545231,
                          7895122, 5552012, 3852085, 8777541, 5050552, 7576651,
                          8451277, 7825877, 7881200, 1302850, 1250255, 4581002};

int main() { 
    int accNum = -1;
    std::cout << "Enter your account number: ";
    std::cin >> accNum;
    if (!std::cin) {
        std::cout << "Bad input! That's not a number!" << std::endl;
        return -1;
    }
    for (int i = 0; i < NUMBER_OF_ACCOUNTS; i++) {
        if (accNum == accounts[i]) {
            std::cout << "Found your account number! Valid input." << std::endl;
            return 0;
        }

    }
    std::cout << "Unable to find your account number! Invalid input." << std::endl;
    return -2; 
}
