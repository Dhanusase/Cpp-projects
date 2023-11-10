#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num;
	int guess;
	int tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	cout << "Welcome to the Number Guessing Game!" << endl;
	
	do
	{
		cout << "Enter a guess between 1 - 100 : ";
		cin >> guess;
		tries++;
		
		if (guess > num)
			cout << "Too high! Try again\n\n";
		else if (guess < num)
			cout << " Too low! Try again\n\n";
		else
			cout << "\nCongratulations! You guessed the correct number";
	}
	while (guess != num);
	
	return 0;
}
