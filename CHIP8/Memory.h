#include "Byte.h"
#pragma once

class Memory {
private:
	byte memory[4096];
public:
	byte getData(short address);
	void setData(short address, byte data);
	void testData();
};

