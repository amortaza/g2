#pragma once

#include <map>

#include "AceRgbRect.hpp"
#include "AceTextureRect.hpp"
#include "AceProgram.hpp"

#include "free_font.h"

namespace g2 {

	extern int FLAG_TEXTURE;

	extern int FLAG_RGB_ANY;	
	extern int FLAG_RGB_SOLID;
	extern int FLAG_RGB_HORIZ_GRADIENT;
	extern int FLAG_RGB_VERT_GRADIENT;

	extern int FLAG_ALPHA_HORIZ_GRADIENT;
	extern int FLAG_ALPHA_VERT_GRADIENT;

	namespace Internal {

		extern float red, green, blue;
		extern float red2, green2, blue2;

		extern glm::mat4 WinOrtho;

		extern AceProgram* ace_rgb_prog;
		extern AceProgram* ace_texture_prog;
		extern AceProgram* ace_atlas_prog;

		extern AceRgbRect* ace_rgb_rect;
		extern AceTextureRect* ace_texture_rect;

		extern AceTexture* current_ace_texture;

		extern Atlas *current_atlas;
		extern TextureRef* current_atlas_ref;

		extern std::map<std::string, Atlas*> atlasMap;
		extern std::map<std::string, TextureRef*> atlasRefMap;

		extern int last_font_x, last_font_y;
		extern char last_font_c;

		extern float current_alpha;
		extern float alpha2;

		extern std::stack<glm::mat4> orthoStack;
		extern std::stack<int> viewportStack2;

		extern int viewportWidth, viewportHeight;
	}
}
