#pragma once
#include <memory>
#include "../domain/Code.h"
#include "../domain/CodeRepository.h"

class GenerateCode
{
public:
	GenerateCode(std::shared_ptr<CodeRepository> r = std::make_shared<CodeRepository>()) : repo(r) {}
	virtual Code Get();
private:
	std::shared_ptr<CodeRepository> repo;
};

