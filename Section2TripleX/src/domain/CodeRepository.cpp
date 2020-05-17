#include "CodeRepository.h"
#include <iostream>

Code CodeRepository::GetRandomCode()
{
	return Code(gateway->GenerateNumber(), gateway->GenerateNumber(), gateway->GenerateNumber());
}

Code CodeRepository::GetCodeFromPlayer()
{
	std::cout << "Enter first number to the door code." << std::endl;
	auto firstNumber = gateway->AskPlayerForNumber();

	std::cout << "Enter second number to the door code." << std::endl;
	auto secondNumber = gateway->AskPlayerForNumber();

	std::cout << "Enter third number to the door code." << std::endl;
	auto thirdNumber = gateway->AskPlayerForNumber();

	return Code(firstNumber, secondNumber, thirdNumber);
}
