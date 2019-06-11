/**
 * Created by Sam on 05/12/2018.
 */




	//0NNN	Execute machine language subroutine at address NNN
	 static void executeMachineSub() {
	}

	//00E0	Clear the screen
	 static void clearScreen() {
	
	}

	//00EE	Return from a subroutine
	 static void returnSub() {
	
	}

	//1NNN	Jump to address NNN
	 static void jump() {
	}

	//2NNN	Execute subroutine starting at address NNN
	 static void executeSub() {
	}

	//3XNN	Skip the following instruction if the value of register VX equals NN
	 static void skipIfConstEqual() {
	}

	//4XNN	Skip the following instruction if the value of register VX is not equal to NN
	 static void skipIfNotEqual() {
	}

	//5XY0	Skip the following instruction if the value of register VX is equal to the value of register VY
	 static void skipIfEqual() {
	}

	//6XNN	Store number NN in register VX
	 static void storeConst() {
	}

	//7XNN	Add the value NN to register VX
	 static void addConst() {
	}

	//8XY0	Store the value of register VY in register VX
	 static void store() {
	}

	//8XY1	Set VX to VX OR VY
	 static void AND() {
	}

	//8XY2	Set VX to VX AND VY
	 static void OR() {
	}
	//8XY3	Set VX to VX XOR VY

	 static void XOR() {
	}

	//8XY4	Add the value of register VY to register VX
	//Set VF to 01 if a carry occurs
	//Set VF to 00 if a carry does not occur

	 static void addReg() {
	}

	//8XY5	Subtract the value of register VY from register VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	 static void subReg() {
	}

	//8XY6	Store the value of register VY shifted right one bit in register VX
	//Set register VF to the least significant bit prior to the shift


	 static void shiftRight() {
	}

	//8XY7	Set register VX to the value of VY minus VX
	//Set VF to 00 if a borrow occurs
	//Set VF to 01 if a borrow does not occur

	 static void subRegStore() {
	}

	//8XYE	Store the value of register VY shifted left one bit in register VX
	//Set register VF to the most significant bit prior to the shift

	 static void shiftLeft() {
	}

	//9XY0	Skip the following instruction if the value of register VX is not equal to the value of register VY

	 static void skipNotEqualReg() {
	}

	//ANNN	Store memory address NNN in register I

	 static void setIAddr(short address) {

	}

	//BNNN	Jump to address NNN + V0

	 static void jumpAdd() {
	}
	//CXNN	Set VX to a random number with a mask of NN

	 static void random() {
	}

	//DXYN	Draw a sprite at position VX, VY with N bytes of sprite data starting at the address stored in I

	 static void Draw() {
	}

	//Set VF to 01 if any set pixels are changed to unset, and 00 otherwise
	 static void VFPixels() {
	}
	//EX9E	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is pressed

	 static void skipKeyPress() {
	}

	//EXA1	Skip the following instruction if the key corresponding to the hex value currently stored in register VX is not pressed

	 static void skipNotKeyPress() {
	}

	//FX07	Store the current value of the delay timer in register VX

	 static void storeDelay() {
	}

	//FX0A	Wait for a keypress and store the result in register VX

	 static void storeKeyPress() {
	}

	//FX15	Set the delay timer to the value of register VX

	 static void setDelay() {
	}

	//FX18	Set the sound timer to the value of register VX

	 static void setTimer() {
	}

	//FX1E	Add the value stored in register VX to register I

	 static void addToI() {
	}

	//FX29	Set I to the memory address of the sprite data corresponding to the hexadecimal digit stored in register VX

	 static void spriteToI() {
	}

	//FX33	Store the binary-coded decimal equivalent of the value stored in register VX at addresses I, I + 1, and I + 2

	 static void storeDecimal() {
	}

	//FX55	Store the values of registers V0 to VX inclusive in memory starting at address I
	//I is set to I + X + 1 after operation
	 static void storeRegisters() {
	}


	 static void incrementI() {
	}

	//FX65	Fill registers V0 to VX inclusive with the values stored in memory starting at address I
	//I is set to I + X + 1 after operation
	 static void fillRegisters() {
	}



