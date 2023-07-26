# pragma once
# include <Siv3D.hpp>
# include "../cookie/cookie.hpp"

namespace Scenes
{
	enum class Scene
	{
		Welcome
	};

	struct data
	{
		Cookie::Cookies cookies;
	};

	typedef SceneManager<Scenes::Scene, data> App;
}
