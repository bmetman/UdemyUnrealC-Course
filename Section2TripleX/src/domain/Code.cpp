#include "Code.h"

int Code::GetMultipliedNumbers()
{
	return Number1 * Number2 * Number3;
}

int Code::GetSumOfNumbers()
{
	return Number1 + Number2 + Number3;
}

bool operator==(Code& left, Code& right)
{
	return left.GetSumOfNumbers() == right.GetSumOfNumbers() && 
		left.GetMultipliedNumbers() == right.GetMultipliedNumbers();
}

std::ostream& operator<<(std::ostream& strm, const Code& c)
{
	return strm << c.Number1 << " " << c.Number2 << " " << c.Number3;
}
