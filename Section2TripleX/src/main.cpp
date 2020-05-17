#include <iostream>
#include <optional>
#include "resource/Game.h"
#include "main.h"

int main() {
	PrintIntroduction();
	Game().Play();
}

void PrintIntroduction()
{
	std::cout << "You're a super-secret hacker and you need to hack your way into the server room." << std::endl;
	std::cout << "Unfortunately, entry is closed off by a set of five doors, guarded by a state-of-the art security system." << std::endl;
	std::cout << "To get to the server room you have to type in the security code to each door." << std::endl << std::endl;

	std::cout << "Each door code consists of three numbers." << std::endl;
	std::cout << "Though you couldn't find the door codes, you do know the product and sum of each door code." << std::endl;
	std::cout << "Use those to calculate the door code and get into that server room!" << std::endl << std::endl;
}
