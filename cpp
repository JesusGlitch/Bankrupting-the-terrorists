// Jesus Uribe 
//Bankrupting Terrorist

#include <iostream>

using namespace std;
// function prototype (declaration)
void normalTransaction(int x, int y);

// function prototype (declaration)
void hackedTransaction(int& x, int& y);

// main function
int main()
{
	// Joe's Coffee Shop
	int joescoffeeShop = 500;

	// Terrorist Account Balance
	int terroristAccount = 100005663;

	cout << "          Bank of America" << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "\n         Account Balances" << endl;
	cout << "____________________________________\n" << endl;
	cout << "Joe's Coffee Shop: $" << joescoffeeShop << endl;
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n" << endl;

	cout << "Normal Transaction:\n";

	// Call the function normalTransaction with the integers Joe's Coffee Shop and terroristAccount
	normalTransaction(joescoffeeShop, terroristAccount);

	cout << "Joe's Coffee Shop: $" << joescoffeeShop << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n";
	cout << "Hacked Transaction:\n";

	// Call the function hackedTransaction with the integers Joe's Coffee Shop and terroristAccount
	hackedTransaction(joescoffeeShop, terroristAccount);

	cout << "Joe's Coffee Shop: $" << joescoffeeShop << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n";

	// Return a value of 0
	return 0;
}

// Function definition
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function definition
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
