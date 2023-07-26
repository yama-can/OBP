# pragma once
# include <Siv3D.hpp>
# include "css.hpp"

namespace Rendering
{
	namespace HTML
	{
		struct Element
		{
			String tagName;
			std::unique_ptr<Array<Element>> childs;
			bool isMatch(String&);
		};
		
	}
}
