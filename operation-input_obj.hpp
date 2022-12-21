#pragma once

#include<string> // std::string

namespace knl
{
	// Just basically a wrapper for a string object
	struct input_obj
	{
		std::string input{};
		input_obj(std::string s) { input = s; }

		// Member Functions
		auto clear      ()              { input = std::string{}; }
		auto add        (std::string s) { input += s; }
		auto operator[] (int i)         { return input[i]; }
		auto at         (int i)         { return input.at(i); }
		auto substr     (int i)         { return input.substr(i); }
		auto substr     (int i, int b)  { return input.substr(i, b); }
		auto size       ()              { return input.size(); }
	};
}