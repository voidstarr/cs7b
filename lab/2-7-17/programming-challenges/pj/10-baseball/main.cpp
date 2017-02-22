#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readFile(std::string, std::vector<std::string>&);
void printTeams(std::vector<std::string>);
int promptUser();
int countWins(std::string, std::vector<std::string>);


int main() {
    std::vector<std::string> teams;
    std::vector<std::string> winners;

    readFile("./Teams.txt", teams);
    readFile("./WorldSeriesWinners.txt", winners);

    printTeams(teams);
    int team = promptUser();
    int wins = countWins(teams[team], winners);

    std::cout << "The " << teams[team] << " have won " << wins << " times." << std::endl;

    return 0;
}

int countWins(std::string team, std::vector<std::string> b) {
    int wins = 0;
    for (std::string s : b) {
        if (team == s)
            wins++;
    }
    return wins;
}

void readFile(std::string fileName, std::vector<std::string>& v) {
    std::ifstream ifs(fileName);
    std::string tok;
    if (ifs.is_open())
        while (std::getline(ifs, tok))
            v.push_back(tok);
}

void printTeams(std::vector<std::string> teams) {
    for (int i = 0; i < teams.size(); i++) {
        std::cout << (i + 1) << ". " << teams[i] << std::endl;
    }
}

int promptUser() {
    std::cout << "Enter your team's number"
              << std::endl << ">> ";
    int num;
    std::cin >> num;
    return num -1;
}
