#pragma once
#include <memory>
#include "ParseInput.h"

class CodeGateway {
public:
	CodeGateway(std::shared_ptr<ParseInput> p = std::make_shared<ParseInput>());
	virtual int GenerateNumber(const int& = 1, const int& = 5);
	virtual int AskPlayerForNumber();

private:
	std::shared_ptr<ParseInput> parser;
};
