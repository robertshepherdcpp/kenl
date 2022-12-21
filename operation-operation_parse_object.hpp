#pragma once

#include"operation-parse_classes.hpp"

#include<string> // std::string

namespace knl
{
	auto operation_parse_object(std::string a, std::string b)
	{
		if (a == "run")
		{
			return 1;
		}
		else if (a == "open")
		{
			return 2;
		}
		else if (a == "watch")
		{
			return 3;
		}
		else if (a == "add")
		{
			return 4;
		}
	}
} // namespace knl