#pragma once

#include<string> // std::string

#include"gui-shapes.hpp"

namespace knl
{

	// run, open, watch, add

	struct run 
	{
		std::string operation{};

		run(std::string& operation_p) { operation = operation_p; }

		auto do_thing()
		{
			if (operation == " triangle")
			{
				print_triangle(5, 10);
			}
			if (operation == " square")
			{
				print_square(5);
			}
			if (operation == " rectangle")
			{
				print_rectangle(5, 10);
			}
		}
	};

	struct open
	{
		std::string operation{};

		open(std::string& operation_p) { operation = operation_p; }
	};

	struct watch
	{
		std::string operation{};

		watch(std::string& operation_p) { operation = operation_p; }
	};

	struct add
	{
		std::string operation{};

		add(std::string& operation_p) { operation = operation_p; }
	};

} // namespace knl