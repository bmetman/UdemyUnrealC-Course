#include <iostream>
#include <optional>
#include "ParseInput.h"
#include "Randomize.h"

std::optional<int> ReadNumberFromUser() {
	std::string UserInput;
	std::cin >> UserInput;
	return ParseInput::ParseInt(UserInput);
}

int main() {
	int SecretCode = Randomize().GenerateRandomInt(0, 100);

	int Guess = -1;
	while (Guess != SecretCode) {
		std::cout << "\nEnter a number." << std::endl;
		auto UserInput = ReadNumberFromUser();

		if (!UserInput.has_value()) {
			std::cout << "Input is not a number." << std::endl;
			continue;
		}

		Guess = UserInput.value();
		std::cout << "Your guess is: " << Guess << ". ";
		std::cout << (Guess < SecretCode ? "Try higher!" : "Try lower!") << std::endl;
	}

	std::cout << "Correct, you win!" << std::endl;
}
