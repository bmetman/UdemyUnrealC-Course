#pragma once
#include<memory>

#include "SecretCode.h"
#include "../data/SecretCodeGateway.h"

class SecretCodeRepository {
public:
public:
	SecretCodeRepository(std::shared_ptr<SecretCodeGateway> g = std::make_shared<SecretCodeGateway>()) : gateway(g) {}
	virtual SecretCode Get();
private:
	std::shared_ptr<SecretCodeGateway> gateway;
};