#include <iostream> 

void option1();
void option2();
void option3();


int main() {
    while (true) {
        std::cout << "1: OPTION 1" << std::endl
                  << "2: OPTION 2" << std::endl
                  << "3: OPTION 3" << std::endl
                  << ">> ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                option1();
                break;
            case 2:
                option2();
                break;
            case 3:
                option3();
                break;
            default:
                std::cout << "incorrect choice! try again." << std::endl;
                          << std::endl;
                break;
        }
    };
    return 0;
}


