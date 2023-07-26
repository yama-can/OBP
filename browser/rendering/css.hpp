# pragma once
# include <Siv3D.hpp>

namespace Rendering
{
	namespace CSS
	{
		struct Property
		{
			String name;
			Array<String> values;
			bool isImportant;
		};

		typedef Array<Property> CSS;
	}
}
