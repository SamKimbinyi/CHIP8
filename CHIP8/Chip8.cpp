#include <iostream>
#include "Chip8.h"
#include "Memory.h"
#include "CPU.h"
#include "Register.h"
#include "CDebug.h"

Memory _memory;
Register _register;

int main() {

	_memory.testData();

	short instruction = fetch(0X00);
	CDebug::output(instruction);

	
	
	
	system("pause");



}

short fetch(short address) {
	
	byte instruction1 = _memory.getData(address);
	byte instruction2 = _memory.getData(address + 0x01);

	short currentInstruction = instruction1 << 8 | instruction2 & 0xFF;
		return currentInstruction;
}

void decode(short instruction) {
		
	switch (instruction & 0xF000) {
		
		case(0X0000):
			break;
		case(0xA000):
			
	}
}