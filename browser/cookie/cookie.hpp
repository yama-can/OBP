# pragma once
# include <Siv3D.hpp>
# include <variant>

namespace Cookie
{
	enum class CookieFlag : uint8
	{
		HttpOnly = 0b00000001,
		Secure = 0b00000010,
	};

	enum class SameSiteFlag : uint8
	{
		Strict,
		Lax,
		None
	};

	struct Cookie
	{
		String name;
		String domain;
		String value;
		String path;
		std::variant<DateTime, String> expiresOrSession;
		uint8 flags;
		SameSiteFlag sameSite;
	};

	typedef Array<Cookie> Cookies;
}
