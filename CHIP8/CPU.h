#pragma once
#include "Byte.h"
class CPU
{
public:
	CPU();
	~CPU();
	void fetch(short addresss);
	byte opcode[2];
	void decode();
	void execute();
};

