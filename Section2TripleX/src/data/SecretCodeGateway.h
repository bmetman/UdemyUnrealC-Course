#pragma once

class SecretCodeGateway {
public:
	SecretCodeGateway();
	virtual int GenerateNumber(const int& = 1, const int& = 10);
};
