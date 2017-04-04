#include <iostream> 
#include <fstream>
#include <vector>

int main() {
    std::vector<std::streampos> strpos;
    std::string fname;
    std::cout << "file name" << std::endl << ">> ";
    std::getline(std::cin, fname);

    std::fstream file(fname, std::ios::in);

    if(file.good()) {
        int i = 0;
        std::string line;
        do {
            strpos.push_back(file.tellg());
            std::getline(file, line);
            //std::cout << line << std::endl;
            i++;
        } while (!file.eof());

        strpos.erase(strpos.end());
        file.clear();

        int l = strpos.size() - 10;
        int vecPos = (l < 0) ? 0 : l;

        

        for (int j = vecPos; j < strpos.size() && !file.eof(); j++) {
            //std::cout << "seek to: " << strpos.at(j);
            file.seekg(strpos.at(j));
            std::getline(file, line);
            std::cout << line << std::endl;
        }

        if (strpos.size() < 10) {
            std::cout << "entire file has been displayed." << std::endl;
        }
    } else {
        std::cout << "can't open that file!" << std::endl;
    }

    return 0;
}


