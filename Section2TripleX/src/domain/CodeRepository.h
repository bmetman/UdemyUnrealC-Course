#pragma once
#include<memory>

#include "Code.h"
#include "../data/CodeGateway.h"

class CodeRepository {
public:
public:
	CodeRepository(std::shared_ptr<CodeGateway> g = std::make_shared<CodeGateway>()) : gateway(g) {}
	virtual Code Get();
private:
	std::shared_ptr<CodeGateway> gateway;
};