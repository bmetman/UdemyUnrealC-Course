#pragma once
#include <memory>
#include "../domain/Code.h"
#include "../domain/CodeRepository.h"

class GetCode
{
public:
	GetCode(std::shared_ptr<CodeRepository> r = std::make_shared<CodeRepository>()) : repo(r) {}
	virtual Code Generate();
private:
	std::shared_ptr<CodeRepository> repo;
};

