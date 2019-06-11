#include "CDebug.h"
#include <iostream>
static void output(short value) {
	std::cout << std::hex << (int) value;
}

void CDebug::output(short value)
{
	std::cout << std::hex << (short)value;
}
