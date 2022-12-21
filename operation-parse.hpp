#pragma once

#include"operation-input_obj.hpp" // knl::input_obj
#include"operation-ascii.hpp" // knl::ascii
#include"operation-parse_object.hpp" // knl::parse_object

#include<string> // std::string

namespace knl
{
	auto parse(input_obj& o)
	{
		std::string current_string = o.input;
		constexpr int i = 0;
		// reason it doesn't move is because we are just making a substr and assigning it to current_string.
		while(current_string[i] == ' ')
		{
			// remove whitespace before.
			if (current_string[i] == ascii::whitespace)
			{
				current_string = current_string.substr(1);
				//current_string.erase(std::remove(current_string.begin(), current_string.end(), ' '), (current_string.begin() + 1));
			}
			//current_string.erase(std::remove(current_string.begin(), current_string.end(), ' '), (current_string.begin() + 1));
		}

		// return current_string;

		// We are know at the command.



		std::string command{};
		int index = 0;
		while(ascii::is_character(current_string[index]) == true && current_string[index] != ' ')
		{
			command += std::string{current_string[index]};
			index++;
		}

		current_string = current_string.substr(index);
		index = 0;

		// now we have some more whitespace, lets get rid of that:

			while (current_string[index] == ascii::whitespace)
			{
				current_string = current_string.substr(index);
				// index = index - 1;
				// we have removed one element so the index will be one less.

				index++;
			}

			index = 0;


		// now we are at the operation on the command.

		    std::string operation{};
		    int ind = index;
			while (ascii::is_character(current_string[ind]) == true && current_string[ind] != ' ')
			{
				operation += std::string{ current_string[ind] };
				ind++;
			}

			auto zy = current_string.substr(ind);

			std::string final{};
			int space_count = 0;

			for (int i = 0; i < zy.size(); i++)
			{
				if (final.find(' ') != -1 && space_count != 0)
				{
					zy = zy.substr(i);
				}
				else if(final.find(' ') != -1 && space_count == 0)
				{
					space_count++;
				}
				else
				{
					continue;
				}
			}

			operation = {};
			operation = zy;

			std::string s{};
			int count = 0;
			for (int i = 0; i < operation.size(); i++)
			{
				if (operation[i] != ' ' && count != 0)
				{
					s += operation[i];
				}
				else if(operation[i] == ' ' && count == 0)
				{
					s += operation[i];
					count++;
				}
			}

			operation = s;


		return parse_object{ command, operation};

		// It works! FINALLY!!!
	}
} // namespace knl