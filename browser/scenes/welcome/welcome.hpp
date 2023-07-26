# pragma once
# include "../manager.hpp"

namespace Scenes
{
	class Welcome : public App::Scene
	{
	public:
		Welcome(InitData&);
		void draw() const override;
		void update() override;
	};
}
