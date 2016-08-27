#include <iostream>

int balance = 1000;
char selection;

void deposit(int balanceAddition = 0);
void withdraw(int balanceSubtraction = 0);

int main() {





	while (selection != 'e' || selection != 'E') {

		std::cout << "Please select an action \n\n[B]alance\n[D]eposit \n[W]ithdraw \n[E]xit \n";
		std::cin >> selection;

		switch (selection) {

		case 'b': case 'B':
			std::cout << "Balance is " << balance;
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

	std::cout << "Please input how much you would like to deposit\n";
	std::cin >> balanceAddition;

	balance = balance + balanceAddition;

}

void withdraw(int balanceSubtraction) {

	std::cout << "Balance is \n" << balance;

	std::cout << "Please input how much you would like to withdraw\n";
	std::cin >> balanceSubtraction;

	if (balanceSubtraction <= balance)
		balance = balance - balanceSubtraction;

	else std::cout << "Error\n";


}