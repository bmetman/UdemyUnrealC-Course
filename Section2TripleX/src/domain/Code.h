#pragma once
#include <ostream>

class Code
{
public:
	Code(const int& n1, const int& n2, const int& n3)
		: Number1(n1), Number2(n2), Number3(n3) {}

	int GetMultipliedNumbers();
	int GetSumOfNumbers();
	friend bool operator== (Code&, Code&);
	friend std::ostream& operator<<(std::ostream& strm, const Code&);

	const int Number1;
	const int Number2;
	const int Number3;
};
