#pragma once

#include"gui-shapes.hpp" // knl::rectangle
#include"operation-input_obj.hpp" // knl::input_obj

#include<iostream> // std::cout
#include<string> // std::string, std::getline

namespace knl
{
	auto input_box() -> input_obj
	{
		std::cout << "|";
		for (int i = 0; i < 10; i++)
		{
			std::cout << "- ";
		}
		std::cout << "|";
		std::cout << "\n";
		for (int i = 0; i < 5; i++)
		{
			// FIXME: Do this in a loop.
			std::cout << "|" << "                    " << "|\n";
		}

		std::cout << "\n";

		// output space so it is easier for the user to input.
		for (int i = 0; i < 5; i++)
		{
			std::cout << " ";
		}
		std::string s{};
		std::getline(std::cin, s);

		input_obj user_input{s};

		return user_input;

	}
}