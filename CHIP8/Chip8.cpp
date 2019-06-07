#include <iostream>
#include "Chip8.h"
#include "Memory.h"
#include "Register.h"


int main() {

	Memory _memory;
	Register _register;
	_memory.setData(0X00, 0XA3);
	std::cout << std::hex << (int)_memory.getData(0X00);
	system("pause");



}