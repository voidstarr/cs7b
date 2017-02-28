#include <iostream>
#include <iomanip>

void firstAct();
void arrayAct();
void constPtrAct();

int main() {
    //firstAct();
    arrayAct();
    //constPtrAct();
    return 0;

}

void constPtrAct() {
    //const int
}   

void arrayAct() {
    short numbers[] = {10, 20, 30, 40, 50};
    
    std::cout << &numbers
              << " contains " 
              << *numbers << std::endl;

    // value of numbers[1]
    //std::cout << *(numbers + 1) << std::endl
    // value of numbers[2] etc..
    //          << *(numbers + 2) << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cout << "*(numbers + " << i << ") = " << *(numbers + i) << std::endl;
    }

    const int SIZE = 5;
    double coins[SIZE] = {0.05, 0.1, 0.25, 0.5, 1.00};
    
    double* dblPtr;
    dblPtr = coins;

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < SIZE; i++) {
        std::cout << dblPtr[i] << " ";
    }
    std::cout << std::endl;

    double *dblPtr2;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "i: " <<  *(coins + i) << " ";
        dblPtr2 = &coins[i];
        std::cout << dblPtr2 << std::endl;
    }
    std::cout << std::endl << std::endl;

    const int SET_SIZE = 8;
    int mySet[SET_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr = mySet;

    for (int i = 0; i < SET_SIZE; numPtr++, i++){
        std::cout << *numPtr << " ";
    }
    std::cout << *numPtr << std::endl;


}

void firstAct() {
    char letter;
    short number;
    float amount;
    char ch;
    double profit;

    std::cout << "letter addr: " << long(&letter) << std::endl;
    std::cout << "number addr: " << long(&number) << std::endl;
    std::cout << "amount addr: " << long(&amount) << std::endl;
    std::cout << "ch addr:     " << long(&ch) << std::endl;
    std::cout << "profit addr: " << long(&profit) << std::endl;

    int x = 25;
    int *ptr;

    ptr = &x;

    std::cout << "x addr:      " << long(&ptr) << std::endl 
              << "ptr addr:    " << long(ptr) << std::endl;

    std::cout << "value of x:  " << *ptr << std::endl;

    *ptr = 100;

    std::cout << "modified value of x: " << x << std::endl;

    int y = 50, z = 75;

    ptr = &y;
    *ptr *= 2;

    ptr = &z;
    *ptr *= 2;

    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
}
