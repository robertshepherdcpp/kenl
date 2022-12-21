#pragma once

#include<string> // std::string

#include"gui-shapes.hpp"
#include"operation-clear_screen.hpp"

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
				clear();
				print_triangle(5, 10);
			}
			if (operation == " square")
			{
				clear();
				print_square(5);
			}
			if (operation == " rectangle")
			{
				clear();
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