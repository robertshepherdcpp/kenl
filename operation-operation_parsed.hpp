#pragma once

#include"operation-parse_object.hpp"
#include"operation-operation_parse_object.hpp"
#include"operation-parse_classes.hpp"

namespace knl
{
	auto operation_parse(parse_object& obj)
	{
		auto object_int = operation_parse_object(obj.command, obj.operation);

		if (object_int == 1)
		{
			run object{ obj.operation };
			object.do_thing();
		}
		if (object_int == 2)
		{
			open object{ obj.operation };
		}
		if (object_int == 1)
		{
			watch object{ obj.operation };
		}
		if (object_int == 1)
		{
			add object{ obj.operation };
		}
	}
}