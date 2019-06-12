#pragma once
#include "Byte.h"
class Register
{
public:
	Register();

	byte stack[64] = {};
	//General Purpose Registers
	byte V[16] = {};
	//Instruction Register
	short I;
	//Program Counters
	short programCounter;

	//Stack Pointer
	byte stackPointer;
	//Delay Timer
	byte delayTimer;
	//Sound timer
	byte soundTimer;



};

