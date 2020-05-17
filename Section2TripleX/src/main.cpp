#include <iostream>
#include <optional>
#include "usecase/ParseInput.h"
#include "resource/Game.h"

std::optional<int> ReadNumberFromUser() {
	std::string UserInput;
	std::cin >> UserInput;
	return ParseInput::ParseInt(UserInput);
}

int main() {
	Game game;

	while (game.Guess()) {
		//auto UserInput = ReadNumberFromUser();

		//if (!UserInput.has_value()) {
		//	std::cout << "Input is not a number." << std::endl;
		//	continue;
		//}
	}

	std::cout << "Correct, you win!" << std::endl;
}
