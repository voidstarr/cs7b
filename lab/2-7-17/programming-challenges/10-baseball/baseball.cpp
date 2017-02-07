/*
*
*	Created by : DeekHead
*	Feb 7, 2017
*	11:41:35 AM
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <istream>

void readFile(std::vector<std::string>&, std::vector<std::string>&);
int winningTeams(std::string, std::vector<std::string>&);

int main(){

	std::vector<std::string> teams;
	std::vector<std::string> winners;
	std::string choice = "";
	int wins;

	readFile(teams, winners);

	std::cout << "Here is the list of teams to choose from:\n";
	std::cout << "__________________________________________\n";

	for(unsigned i = 0; i < teams.size(); i++){
			std::cout << teams[i] << std::endl;
		}

	std::cout << "__________________________________________\n\n";
	std::cout << "Which team do you choose?\n";
	getline(std::cin, choice);

	wins = winningTeams(choice, winners);

	std::cout << std::endl <<choice << " won " << wins << " time(s)." << std::endl;

}

int winningTeams(std::string choice, std::vector<std::string>& winners){

	std::string index = "";
	int wins = 0;

	for(unsigned i = 0; i < winners.size(); i++){
		if(choice == winners[i]){
			wins++;
		}
	}

	return wins;
}

void readFile(std::vector<std::string>& teams, std::vector<std::string>& winners){
	std::ifstream openFiles;
	std::string team = "";
	std::string win = "";

	//Opening teams text file
	openFiles.open("Teams.txt");
	if(openFiles.is_open()){
		//std::cout << "File Opened!\n";
		while(getline(openFiles, team)){
			teams.push_back(team);
		}
	}
	openFiles.close();
	openFiles.clear();

	//Opened World series winners file using same variable
	openFiles.open("WorldSeriesWinners.txt");
		if(openFiles.is_open()){
			//std::cout << "File Opened!\n";
			while(getline(openFiles, win)){
				winners.push_back(win);
			}
		}
		openFiles.close();
		openFiles.clear();
}
