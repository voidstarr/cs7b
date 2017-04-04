#include <iostream> 
#include <cstring>


int countWords(char*);

int main() {
   
    std::cout << "Enter a sentence: " << std::endl << ">> ";

    const int LEN = 50;
    char* input;
    std::cin.getline(input, LEN);
    
    int words = countWords(input);


    std::cout << input << " has " << words << " words." << std::endl;


    return 0;
}

int countWords(char* line) {
    char* ptr = line;
    int ctr = 0;
    do {
        ctr++;
        ptr = strchr(ptr+1, ' ');
    } while(ptr != NULL);
    return ctr;
}

