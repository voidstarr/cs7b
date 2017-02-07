// This program is carefully constructed to use the 
// "fall through" feature of the switch statement.
#include <iostream>
using namespace std;

int main()
{
	int modelNum;

	// Display available models and get the user's choice
	cout << "Our TVs come in three models: The 100, 200, and 300. \n";
	cout << "Which do you want? ";
	cin  >> modelNum;
	
	// Display the features of the selected model
	cout << "\nThat model has the following features: \n";
	
	switch (modelNum)
	{
		case 300:  cout << "    Built-in DVR \n";
		case 200:  cout << "    1080p high definition picture \n";
		case 100:  cout << "    42\" LCD flat screen \n";
				   break;
	    default :  cout << "You can only choose the 100, 200, or 300.\n ";
   	}
	return 0;
}
