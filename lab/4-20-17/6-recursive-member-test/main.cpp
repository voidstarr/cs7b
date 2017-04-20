#include <iostream>
#include <random>
#include <ctime>

bool isMember(int[], int, int);

int main() {
    srand(time(0));
    
    const int SIZE = 900;
    int arr[SIZE]; 

    for (int i = 0; i < SIZE; i++) {
            arr[i] = rand();
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    int search = rand();
    bool mem = isMember(arr, SIZE, search);
    std::cout << search << " is" << (mem ? " " : " not ") << "a member of array." << std::endl;
}

bool isMember(int arr[], int s, int m) {
    if (s == 0 && arr[0] != m)
        return false;
    else if (arr[s-1] == m)
        return true;
    else
        return isMember(arr, s-1, m);
}
