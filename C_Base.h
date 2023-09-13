#ifndef __C_BASE__
#define __C_BASE__

#include "ECS_Types.h"

class C_Base
{
public:
	C_Base(const Component& l_type);
	virtual ~C_Base();

	Component GetType();

	friend std::stringstream& operator >> (std::stringstream& l_stream, C_Base& b)
	{
		b.ReadIn(l_stream);
		return l_stream;
	}

	virtual void ReadIn(std::stringstream& l_stream) = 0;

protected:
	Component m_type;
};

#endif
