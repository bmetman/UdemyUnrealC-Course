#include "ParseInput.h"
#include <sstream>
#include <stdexcept>

std::optional<int> ParseInput::ParseInt(std::string input)
{
	try {
		return std::stoi(input);
	}
	catch (std::invalid_argument&) {
		return std::nullopt;
	}
}
