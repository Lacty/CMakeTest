
#include "font.h"
#include <iostream>
#include <string>


void widen(const std::string& str, std::wstring& dest)
{
	wchar_t* wcs = new wchar_t[str.length() + 1];
	size_t ret;
 	mbstowcs_s(&ret, wcs, str.length() + 1, str.c_str(), _TRUNCATE);
 	dest = wcs;
 	delete[]wcs;
}


Font::Font(const std::string& path) :
font(path.c_str())
{
	if (font.Error()) { std::cout << "font err\n"; }
	setlocale(LC_CTYPE, "");
}


void Font::draw(const std::string& str,
	            float x, float y, float size,
	            Hol h, Ver v)
{
	font.FaceSize(size);
	std::wstring wstr;
	widen(str, wstr);

	float offset_x = h == Hol::Left
		? 0.0f
		: h == Hol::Right
		? -font.BBox(wstr.c_str(), wstr.size()).Upper().X()
		: -font.BBox(wstr.c_str(), wstr.size()).Upper().X() * 0.5f;

	float offset_y = v == Ver::Bottom
		? 0.0f
		: v == Ver::Top
		? -font.BBox(wstr.c_str(), wstr.size()).Upper().Y()
		: -font.BBox(wstr.c_str(), wstr.size()).Upper().Y() * 0.5f;
		
	font.Render(wstr.c_str(), wstr.size(), FTPoint(x + offset_x,
		                                              y + offset_y));
}