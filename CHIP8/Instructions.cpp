/**
 * Created by Sam on 05/12/2018.
 */
#include "Instructions.h"
#include "Register.h"
#include "CDebug.h"
#include <iostream>

Instructions::Instructions(Memory* chip8Memory,  Register* chip8Registers) {

	_memory = chip8Memory;
	_register = chip8Registers;
}


	//0NNN	Execute machine language subroutine at address NNN
	  void executeMachineSub() {
	}

	//00E0	Clear the screen
	  void clearScreen() {
	
	}

	//00EE	Return from a subroutine
	  void Instructions::returnSub() {
		  _register->programCounter = _register->stack[_register->stackPointer];
		  _register->stackPointer--;

	}

	//1NNN	Jump to address NNN
	  void Instructions::jump(short address) {
		  _register->programCounter = address;
		  
	}

	//2NNN	Execute subroutine starting at address NNN
	  void Instructions::executeSub(short address) {
		  _register->stack[_register->stackPointer] = _register->programCounter;
		  _register->stackPointer++;
		  _register->programCounter = address;

	}

	//3XNN	Skip the following instruction if the value of register VX equals NN
	  void Instructions::skipIfConstEqual(byte constant, byte reg) {
		  if (_register->V[reg] == constant) {
			  _register->programCounter += 0x2;
		  }
	  }	

	//4XNN	Skip the following instruction if the value of register VX is not equal to NN
	  void Instructions::skipIfConstNotEqual(byte constant, byte reg) {
		  if (_register->V[reg] != constant) {
			  _register->programCounter += 0x2;
		  }
	}

	//5XY0	Skip the following instruction if the value of register VX is equal to the value of register VY
	  void Instructions::skipIfEqual(byte reg1, byte reg2) {
		  if (_register->V[reg1] == _register->V[reg2]) {
			  _register->programCounter += 0x2;
		  }
	}

	//6XNN	Store number NN in register VX
	  void Instructions::storeConst(byte constant, byte reg) {
		  _register->V[reg] = constant;
	}

	//7XNN	Add the value NN to register VX
	  void Instructions::addConst(byte constant, byte reg) {
		  _register->V[reg] += constant;
	}

	//8XY0	Store the value of register VY in register VX
	  void Instructions::store(byte regSource, byte regDestination) {
		  _register->V[regDestination] = _register->V[regSource];

	}

	//8XY1	Set VX to VX AND VY
	  void Instructions::AND(byte regSource, byte regDestination) {
		  _register->V[regDestination] = _register->V[regDestination] & _register->V[regSource];

	}

	//8XY2	Set VX to VX OR VY
	  void Instructions::OR(byte regSource, byte regDestination) {
		  _register->V[regDestination] = _register->V[regDestination] | _register->V[regSource];
	}
	//8XY3	Set VX to VX XOR VY

	  void Instructions::XOR(byte regSource, byte regDestination) {
		  _register->V[regDestination] = _register->V[regDestination] ^ _register->V[regSource];

	}

	//8XY4	Add the value of register VY to register VX
	//Set VF to 01 if a carry occurs
	//Set VF to 00 if a carry does not occur

	  void Instructions::addReg(byte regSource, byte regDestination) {

	}

	//8XY5	Subtract the value of register VY from register VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	  void Instructions::subReg(byte regSource, byte regDestination) {

	}

	//8XY6	Store the value of register VY shifted right one bit in register VX
	//Set register VF to the least significant bit prior to the shift


	  void Instructions::shiftRight(byte reg) {

	}

	//8XY7	Set register VX to the value of VY minus VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	  void Instructions::subRegStore(byte regSource, byte regDestination) {

	}

	//8XYE	Store the value of register VY shifted left one bit in register VX
	//Set register VF to the most significant bit prior to the shift

	  void Instructions::shiftLeft(byte reg) {
	}

	//9XY0	Skip the following instruction if the value of register VX is not equal to the value of register VY

	  void Instructions::skipNotEqualReg(byte regSource, byte regDestination) {
	}

	//ANNN	Store memory address NNN in register I

	  void Instructions::setIAddr(short address) {

	}

	//BNNN	Jump to address NNN + V0

	  void Instructions::jumpAdd(byte constant) {
	}
	//CXNN	Set VX to a random number with a mask of NN

	  void Instructions::random(byte reg) {
	}

	//DXYN	Draw a sprite at position VX, VY with N bytes of sprite data starting at the address stored in I

	  void Instructions::Draw() {
	}

	//Set VF to 01 if any set pixels are changed to unset, and 00 otherwise
	  void Instructions::VFPixels() {
	}
	//EX9E	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is pressed

	  void Instructions::skipKeyPress() {
	}

	//EXA1	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is not pressed

	  void Instructions::skipNotKeyPress() {
	}

	//FX07	Store the current value of the delay timer in register VX

	  void Instructions::storeDelay() {
	}

	//FX0A	Wait for a keypress and store the result in register VX

	  void Instructions::storeKeyPress() {
	}

	//FX15	Set the delay timer to the value of register VX

	  void Instructions::setDelay(byte reg) {
	}

	//FX18	Set the sound timer to the value of register VX

	  void Instructions::setTimer(byte reg) {
	}

	//FX1E	Add the value stored in register VX to register I

	  void Instructions::addToI(byte reg) {
	}

	//FX29	Set I to the memory address of the sprite data corresponding to the hexadecimal digit stored in register VX

	  void Instructions::spriteToI() {
	}

	//FX33	Store the binary-coded decimal equivalent of the value stored in register VX at addresses I, I + 1, and I + 2

	  void Instructions::storeDecimal() {
	}

	//FX55	Store the values of registers V0 to VX inclusive in memory starting at address I
	//I is set to I + X + 1 after operation
	  void Instructions::storeRegisters() {
	}


	  void Instructions::incrementI() {
	}

	//FX65	Fill registers V0 to VX inclusive with the values stored in memory starting at address I
	//I is set to I + X + 1 after operation
	  void Instructions::fillRegisters() {
	}



