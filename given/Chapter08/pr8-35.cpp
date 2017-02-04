// This program lets the user play a game of rock, paper, scissors
// with the computer. The computer's choices are randomly generated.
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const string name[4] = {" ", "rock", "paper", "scissors"};

int main()
{
	int computerChoice, 
	    playerChoice,
		computerPoints = 0,   // Point accumulators
		playerPoints = 0;   
	
	srand(time(NULL));        // Give the random generator 
	                          // a seed to start with 
	playerPoints = 0;
	computerPoints = 0;

	cout << "Let's play Rock-Paper-Scissors!\n";
	cout << "The first player to score 5 points wins.\n\n";

	do
	{	// Generate a random number 1 to 3 to simulate computer choice.
		computerChoice = 1 + rand() % 3;
		
		// Get player's choice
		cout << "Pick 1 (rock), 2 (paper), or 3 (scissors): ";
		cin  >> playerChoice;
		
		if (computerChoice == playerChoice)                      // Tie
		{	cout << "I chose " << name[computerChoice] 
				 << " too, so we tied.\n\n";
		}
		else if ((playerChoice == 1 && computerChoice == 2) ||   // Computer 
				 (playerChoice == 2 && computerChoice == 3) ||   // wins
				 (playerChoice == 3 && computerChoice == 1) )
		{	cout << "I chose " << name[computerChoice] << ", so I win! "
				 << name[computerChoice] << " beats "
				 << name[playerChoice] << ".\n\n";
			computerPoints++;
		}                                                        // Player
		else                                                     // wins
		{   cout << "I chose " << name[computerChoice] << ", so you win! "
				 << name[playerChoice] << " beats "
				 << name[computerChoice] << ".\n\n";
			playerPoints++;
		}
	} while (playerPoints < 5 && computerPoints < 5);

	cout << "Let's see how you did :\n"
		 << "You won " << playerPoints << " points and I won " 
		 << computerPoints << " points.\n";

	if (playerPoints == 5) 
		cout << "Congratulations! You're the champ!\n";
	else
		cout << "Hurray for me! I'm the champ!\n";

	return 0;
}
