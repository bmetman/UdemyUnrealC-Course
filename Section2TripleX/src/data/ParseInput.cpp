#include "ParseInput.h"
#include <sstream>
#include <stdexcept>
#include <iostream>

std::string ParseInput::GetUserInput()
{
	std::string UserInput;

	std::cin >> UserInput;
	std::cin.clear();

	return UserInput;
}

std::optional<int> ParseInput::ParseInt(std::string input)
{
	try {
		return std::stoi(input);
	}
	catch (std::invalid_argument&) {
		return std::nullopt;
	}
}
