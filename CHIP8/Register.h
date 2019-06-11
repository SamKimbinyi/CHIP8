#pragma once
#include "Byte.h"
class Register
{
public:
	Register();
	byte V[16] = {};
	short I;
	short PC;
	byte SP;
	byte DT;
	byte ST;



};

