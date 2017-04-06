#include <iostream> 
#include <vector>
#include <fstream>
#include <sstream>

std::string readFile();
void findWords(std::string, std::vector<std::string>&);

int main() {
    std::vector<std::string> words;
    std::string in = readFile();
    findWords(in, words);
    for (std::string s : words) {
        std::cout << s << std::endl;
    }
    return 0;
}

void findWords(std::string str, std::vector<std::string> &w) {
        int lSpace = 0;
        int nSpace = str.find(' ', lSpace);
        while (nSpace != std::string::npos) {
            int wSize = nSpace - lSpace;
            std::string word = str.substr(lSpace, wSize);
            if(word.find("ei") != std::string::npos || word.find("ie") != std::string::npos) {
                w.push_back(word);
            }
            lSpace = nSpace + 1;
            nSpace = str.find(' ', lSpace);
        }
}

std::string readFile() {
    std::ifstream ifs("sample.txt");
    std::stringstream ss;
    if (ifs.good()) {
        std::string line;
        while (std::getline(ifs, line)) {
            ss << line << " ";
        }
        ifs.close();
    } else {
        std::cout << "wat" << std::endl;
    }
    return ss.str();
}
