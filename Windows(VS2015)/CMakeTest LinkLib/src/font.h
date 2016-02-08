
#pragma once

#include <string>

#define FTGL_LIBRARY_STATIC
#include <FTGL/ftgl.h>


class Font {
private:
	FTPixmapFont font;

public:
	enum class Ver {
		Bottom, Top, Center
	};
	enum class Hol {
		Left, Right, Center
	};

	Font(const std::string& path);

	// Ver:ècé≤ Hol:â°é≤
	void draw(const std::string& str,
		      float x, float y, float size,
		      Hol h, Ver v);
};