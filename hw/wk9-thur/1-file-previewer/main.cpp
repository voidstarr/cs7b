#include <iostream> 
#include <fstream>

int main() {
    std::string fname;
    std::cout << "file name" << std::endl << ">> ";
    std::getline(std::cin, fname);

    std::fstream file(fname, std::ios::in);

    if(file.good()) {
        int i = 0;
        std::string line;
        do {
            std::getline(file, line);
            std::cout << line << std::endl;
            i++;
        } while (!file.eof() && i <= 10);

        if (file.eof()) {
            std::cout << "entire file has been displayed." << std::endl;
        }
    } else {
        std::cout << "can't open that file!" << std::endl;
    }

    return 0;
}


