#ifndef __C_SPRITESHEET__
#define __C_SPRITESHEET__

#include "C_Base.h"

class TextureManager;

class C_SpriteSheet : public C_Base
{
	public:
		C_SpriteSheet() : C_Base(Component::SpriteSheet)
		{

		}
		void Create(TextureManager* l_texMgr);
};

#endif
