

#include "Memory.h"

byte Memory::getData(short address) {

	return memory[address];

}

void Memory::setData(short address, byte data) {
	memory[address] = data;
}

void Memory::testData() {
	setData(0x00, 0xA3);
	setData(0x01, 0x38);
	
}