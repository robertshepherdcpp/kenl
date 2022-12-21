#pragma once

#include<string> // std::string
#include"operation-parse.hpp" //

namespace knl
{
	struct parse_object
	{
		std::string command{};
		std::string operation{};

		bool merged = false;

		parse_object(std::string command_p, std::string operation_p)
		{
			command = command_p;
			operation = operation_p;
		}

		auto merge() { command += operation; merged = true; return command; }
	};
} // namespace knl