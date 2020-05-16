#include <iostream>
#include <optional>
#include "usecase/ParseInput.h"
#include "usecase/GenerateCode.h"

std::optional<int> ReadNumberFromUser() {
	std::string UserInput;
	std::cin >> UserInput;
	return ParseInput::ParseInt(UserInput);
}

int main() {
	auto secretCode = GenerateCode().Get();

	int Guess = -1;
	while (Guess != secretCode.GetMultipliedNumbers()) {
		std::cout << "\nEnter a number." << std::endl;
		auto UserInput = ReadNumberFromUser();

		if (!UserInput.has_value()) {
			std::cout << "Input is not a number." << std::endl;
			continue;
		}

		Guess = UserInput.value();
		std::cout << "Your guess is: " << Guess << ". ";
		std::cout << (Guess < secretCode.GetMultipliedNumbers() ? "Try higher!" : "Try lower!") << std::endl;
	}

	std::cout << "Correct, you win!" << std::endl;
}
