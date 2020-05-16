#pragma once
class SecretCode
{
public:
	SecretCode(const int& n1, const int& n2, const int& n3)
		: Number1(n1), Number2(n2), Number3(n3) {}

	int GetMultipliedNumbers();
	int GetSumOfNumbers();
	bool operator==(const SecretCode&) const;

	const int Number1;
	const int Number2;
	const int Number3;
};
