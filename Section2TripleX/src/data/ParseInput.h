#pragma once
#include <optional>
#include <string>

class ParseInput
{
public:
	virtual std::string GetUserInput();
	virtual std::optional<int> ParseInt(std::string);
};

