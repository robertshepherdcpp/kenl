#pragma once

#include<string> // std::string

namespace knl
{
	namespace ascii
	{
		static constexpr char whitespace = ' ';
		// static constexpr std::string whitespace_str = " ";

		auto is_character(auto c)
		{
			return false;
		}

		auto is_character(char c)
		{
			if (c != whitespace)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
} // namespace knl