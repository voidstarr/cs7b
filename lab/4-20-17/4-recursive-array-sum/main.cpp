#include <iostream>
#include <sstream>

int sumArray(int*, int);

int main (){
    std::cout << "Enter some numbers separated by spaces, and this will calculate the sum." << std::endl << ">> ";
    std::string line;
    std::stringstream arg;
    std::getline(std::cin, line);
    arg << line;

    std::string num;
    int sizeOfArray;
    std::stringstream ss;
    do {
        arg >> num;
        std::cout << "num = " << num << std::endl; 
        ss << num << ' ';
        sizeOfArray += 1;
    } while (!arg.eof());
    std::cout << "sizeOfArray = " << sizeOfArray << std::endl;
    
    int* arr = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        ss >> arr[i];
    }
    int sum = sumArray(arr, sizeOfArray);

    std::cout << "the sum of those numbers is " << sum << std::endl;
}

int sumArray(int* arr, int i) {
    if (i == 0)
        return arr[0];
    std::cout << "i = " << i << std::endl;
    return arr[i-1] + sumArray(arr, i-1);
}
