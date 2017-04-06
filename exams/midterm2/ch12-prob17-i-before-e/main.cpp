/*
 * Group 2
 *
 * Chapter 12 Problem 17
 * 
 * Read in a file, and find all words with ei or ie
 * Then print those words to the console
 *
 * */



#include <iostream> 
#include <vector>
#include <fstream>
#include <sstream>

// reads file and returns string with all of its contents
std::string readFile();
// finds all words containing ei and ie
void findWords(std::string, std::vector<std::string>&);

int main() {
    // holds all words with ei or ie
    std::vector<std::string> words;
    // read our file to a string
    std::string in = readFile();
    // find words and put them into the words vector
    findWords(in, words);
    
    // print words
    for (std::string s : words) {
        std::cout << s << std::endl;
    }
    return 0;
}


// takes a string to search and a vector to put words into
void findWords(std::string str, std::vector<std::string> &w) {
        // keep track of our position
        int lSpace = 0;
        int nSpace = str.find(' ', lSpace);
        // step through the string while we haven't reached the end of it.
        while (nSpace != std::string::npos) {
            // grab a word
            int wSize = nSpace - lSpace;
            std::string word = str.substr(lSpace, wSize);
            // do we want to keep it?
            if(word.find("ei") != std::string::npos || word.find("ie") != std::string::npos) {
                w.push_back(word);
            }
            // continue through the string
            lSpace = nSpace + 1;
            nSpace = str.find(' ', lSpace);
        }
}

std::string readFile() {
    // open our file
    std::ifstream ifs("sample.txt");
    std::stringstream ss;
    // we good?
    if (ifs.good()) {
        std::string line;
        // while the file has contents, read it into our string stream
        while (std::getline(ifs, line)) {
            ss << line << " ";
        }
        // close that bad mama jama
        ifs.close();
    } else {
        // we had an error opening our file. ugh.
        std::cout << "wat" << std::endl;
    }
    // return a string to be used later.
    return ss.str();
}
