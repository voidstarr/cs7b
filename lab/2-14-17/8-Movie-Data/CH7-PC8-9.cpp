//Chapter 7: Programming Challenge # 8 and 9
//  Movie Data: Create a structure named MovieData that takes in movie info
//Title, Director, Year Released, Running time (in minutes)

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct MovieData {
	string Title;
	string Director;
	int Year;
	int runningTime;
	//part 9 modifications start here
	double productionCosts;
	double firstRevenue;
};

void printMovie(MovieData& movie);

int main()
{
	MovieData brandonBlackd;
	brandonBlackd.Title = "Brondon gets BLACKD!!!!!!!!!";
	brandonBlackd.Director = "Big Dick Mike";
	brandonBlackd.Year = 2016;
	brandonBlackd.runningTime = 2048;
	brandonBlackd.productionCosts = 1;
	brandonBlackd.firstRevenue = -2000000;

	MovieData silentChris = { "Silent Chris", "Quentin Tarantino", 2018,260, 24000000, 1000000000};

	MovieData Shawshank = { "The Shawshank Redemption", "Frank Darabont", 1994, 142, 25000000, 28233104 };

	printMovie(brandonBlackd);
	cout << endl;
	printMovie(silentChris);
	cout << endl;
	printMovie(Shawshank);
	cout << endl;



    return 0;
}

void printMovie(MovieData& movie) {

	cout << "Title: " << movie.Title << endl;
	cout << "Director: " << movie.Director << endl;
	cout << "Year Released: " << movie.Year << endl;
	cout << "Running time (in minutes): " << movie.runningTime << endl;
	//cout << "Production costs: " << movie.productionCosts << endl;
	//cout << "First Year Revenue: " << movie.firstRevenue << endl;

	//first Revenue
	if (movie.firstRevenue > 1000000) {
		cout << "First year Revenue: " << movie.firstRevenue / 1000000 << " Million $" << endl;

	}
	else if (movie.firstRevenue < 1000000 && movie.firstRevenue>1000) {
		cout << "First Year Revenue: " << movie.firstRevenue / 1000 << " Thousand $" << endl;
	}
	else if (movie.firstRevenue < 0) {
		cout << "First Year Loss: " << abs(movie.firstRevenue) << endl;
	}
	else {
		cout << "First year Revenue: " << movie.firstRevenue << " $" << endl;
	}

	//prodcution costs
	if (movie.productionCosts > 1000000) {
		cout << "Production Costs: " << movie.productionCosts / 1000000 << " Million" << endl;
	}
	else if (movie.productionCosts < 1000000 && movie.productionCosts>1000) {
		cout << "First Year Revenue: " << movie.productionCosts / 1000 << " Thousand $" << endl;
	}
	else {
		cout << "Production costs: " << movie.productionCosts <<" $" << endl;
	}
}