#include <iostream>

int balance = 1000;
int cash = 500;
char selection;

void deposit(int balanceAddition = 0);
void withdraw(int balanceSubtraction = 0);

int main() {





	while (selection != 'e' || selection != 'E') {

		std::cout << "\nPlease select an action \n\n[B]alance\n[D]eposit \n[W]ithdraw \n[E]xit \n";
		std::cin >> selection;

		switch (selection) {

		case 'b': case 'B':
			std::cout << "\nBalance is " << balance << "\nAdditionally, you have " << cash << " availible to deposit\n";
			break;

		case 'd': case 'D':
			deposit();
			break;

		case 'w': case 'W':
			withdraw();
			break;

		case 'e': case 'E':
			return 0;

		default:
			std::cout << "\nInvalid input\n";
		}
	}
	return 0;
}

void deposit(int balanceAddition) {

	std::cout << "\nPlease input how much you would like to deposit\n";
	std::cin >> balanceAddition;
	
	if (cash >= balanceAddition) {

		balance = balance + balanceAddition;
		cash = cash - balanceAddition;
		}

	else std::cout << "\nError, you do not have enough cash to deposit\n";

	if (std::cin.fail()) {
		std::cout << "\nError, you must enter a number\n";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	

}

void withdraw(int balanceSubtraction) {

	std::cout << "\nBalance is " << balance;

	std::cout << "\nPlease input how much you would like to withdraw\n";
	std::cin >> balanceSubtraction;

	if (balanceSubtraction <= balance) {
		balance = balance - balanceSubtraction;
		cash = cash + balanceSubtraction;
		}

	else std::cout << "\nError, you do not have that much in balance\n";

	if (std::cin.fail()) {
		std::cout << "\nError, you must enter a number\n";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}


}