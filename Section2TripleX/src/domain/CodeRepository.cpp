#include "CodeRepository.h"
#include <iostream>
#include <math.h>

Code CodeRepository::GetRandomCode( const int& MaxMultiplied)
{
	int rangeMax = (int)std::sqrt(MaxMultiplied);
	return Code(
		gateway->GenerateNumber(1, rangeMax),
		gateway->GenerateNumber(1, rangeMax),
		gateway->GenerateNumber(1, rangeMax)
	);
}

Code CodeRepository::GetCodeFromPlayer()

{
	std::cout << "Enter the first number to the door code." << std::endl;
	auto firstNumber = gateway->AskPlayerForNumber();

	std::cout << "Enter the second number to the door code." << std::endl;
	auto secondNumber = gateway->AskPlayerForNumber();

	std::cout << "Enter the third number to the door code." << std::endl;
	auto thirdNumber = gateway->AskPlayerForNumber();

	return Code(firstNumber, secondNumber, thirdNumber);
}
