#pragma once
#include "Memory.h"
#include "Register.h"

class Instructions{

private:
	Memory*_memory;
	Register* _register;

public:
	
	Instructions( Memory* chip8Memory,  Register* chip8Registers);

	 //0NNN	Execute machine language subroutine at address NNN
	 void executeMachineSub(); 

	//00E0	Clear the screen
	 void clearScreen(); 

	//00EE	Return from a subroutine
	 void returnSub(); 


	//1NNN	Jump to address NNN
	 void jump(short address); 
	

	//2NNN	Execute subroutine starting at address NNN
	 void executeSub(short address); 
	

	//3XNN	Skip the following instruction if the value of register VX equals NN
	 void skipIfConstEqual(byte constant, byte reg); 
	

	//4XNN	Skip the following instruction if the value of register VX is not equal to NN
	 void skipIfConstNotEqual(byte constant, byte reg); 
	

	//5XY0	Skip the following instruction if the value of register VX is equal to the value of register VY
	 void skipIfEqual(byte constant, byte reg); 
	

	//6XNN	Store number NN in register VX
	 void storeConst(byte constant, byte reg); 
	

	//7XNN	Add the value NN to register VX
	 void addConst(byte constant, byte reg); 
	

	//8XY0	Store the value of register VY in register VX
	 void store(byte regSource, byte regDestination); 
	

	//8XY1	Set VX to VX OR VY
	 void AND(byte regSource, byte regDestination);
	

	//8XY2	Set VX to VX AND VY
	 void OR(byte regSource, byte regDestination);
	
	//8XY3	Set VX to VX XOR VY

	 void XOR(byte regSource, byte regDestination);
	

	//8XY4	Add the value of register VY to register VX
	//Set VF to 01 if a carry occurs
	//Set VF to 00 if a carry does not occur

	 void addReg(byte regSource, byte regDestination);
	

	//8XY5	Subtract the value of register VY from register VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	 void subReg(byte regSource, byte regDestination);
	

	//8XY6	Store the value of register VY shifted right one bit in register VX
	//Set register VF to the least significant bit prior to the shift


	 void shiftRight(byte reg); 
	

	//8XY7	Set register VX to the value of VY minus VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	 void subRegStore(byte regSource, byte regDestination);
	

	//8XYE	Store the value of register VY shifted left one bit in register VX
	//Set register VF to the most significant bit prior to the shift

	 void shiftLeft(byte reg);
	

	//9XY0	Skip the following instruction if the value of register VX is not equal to the value of register VY

	 void skipNotEqualReg(byte regSource, byte regDestinatione);
	

	//ANNN	Store memory address NNN in register I

	 void setIAddr(short address);

	

	//BNNN	Jump to address NNN + V0

	 void jumpAdd(byte constant); 
	
	//CXNN	Set VX to a random number with a mask of NN

	 void random(byte reg); 
	

	//DXYN	Draw a sprite at position VX, VY with N bytes of sprite data starting at the address stored in I

	 void Draw(); 
	

	//Set VF to 01 if any set pixels are changed to unset, and 00 otherwise
	 void VFPixels(); 
	
	//EX9E	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is pressed

	 void skipKeyPress(); 
	

	//EXA1	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is not pressed

	 void skipNotKeyPress(); 
	

	//FX07	Store the current value of the delay timer in register VX

	 void storeDelay(); 
	

	//FX0A	Wait for a keypress and store the result in register VX

	 void storeKeyPress(); 
	

	//FX15	Set the delay timer to the value of register VX

	 void setDelay(byte reg); 
	

	//FX18	Set the sound timer to the value of register VX

	 void setTimer(byte reg); 
	

	//FX1E	Add the value stored in register VX to register I

	 void addToI(byte reg); 
	

	//FX29	Set I to the memory address of the sprite data corresponding to the hexadecimal digit stored in register VX

	 void spriteToI(); 
	

	//FX33	Store the binary-coded decimal equivalent of the value stored in register VX at addresses I, I + 1, and I + 2

	 void storeDecimal(); 
	

	//FX55	Store the values of registers V0 to VX inclusive in memory starting at address I
	//I is set to I + X + 1 after operation
	 void storeRegisters(); 
	


	 void incrementI(); 
	

	//FX65	Fill registers V0 to VX inclusive with the values stored in memory starting at address I
	//I is set to I + X + 1 after operation
	 void fillRegisters(); 
	
};

