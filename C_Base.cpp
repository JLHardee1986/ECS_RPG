#include "pch.h"



C_Base::C_Base(const Component& l_type)
	: m_type(l_type)
{
}

C_Base::~C_Base()
{
}

Component C_Base::GetType()
{
	return m_type;
}

