#include"gui-shapes.hpp"
#include"gui-input.hpp"
#include"operation-parse.hpp" // knl::parse
#include"operation-ascii.hpp"
#include"operation-input_obj.hpp"
#include"operation-parse_object.hpp"
#include"operation-operation_parsed.hpp"

int main()
{
	/*
	knl::print_triangle(50, 5);
	knl::print_rectangle(20, 30);
	knl::print_square(20);
	*/
	while (true)
	{

		auto x = knl::input_box();
		auto y = knl::parse(x);
		operation_parse(y);

	}


}