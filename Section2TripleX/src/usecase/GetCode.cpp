#include "GetCode.h"

Code GetCode::Generate()
{
	return repo->Get();
}
