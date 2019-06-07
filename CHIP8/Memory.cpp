

#include "Memory.h"

byte Memory::getData(short address) {

	return memory[address];

}

void Memory::setData(short address, byte data) {
	memory[address] = data;
}
