#include "CodeGateway.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>

CodeGateway::CodeGateway(std::shared_ptr<ParseInput> p) : parser(p) {
	srand(static_cast<unsigned int>(time(nullptr)));
}

int CodeGateway::GenerateNumber(const int& from, const int& to)
{
	return rand() % to + from;
}

int CodeGateway::AskPlayerForNumber()
{
	auto UserNumber = parser->ParseInt(parser->GetUserInput());

	while (!UserNumber.has_value()) {
		std::cout << "Input is not a number." << std::endl;
		UserNumber = parser->ParseInt(parser->GetUserInput());
	}

	return UserNumber.value();
}
