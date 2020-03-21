#include "pch.h"
#include"../CHIP8/Memory.cpp"
#include "../CHIP8/Instructions.cpp"
#include "../CHIP8/Register.cpp"
#pragma comment(lib, "Ws2_32.lib")

TEST(MemoryTests, GetData) {
	Memory _memory;
	_memory.setData(0x00, 0xA3);
  EXPECT_EQ(_memory.getData(0x00), 0xA3);

  _memory.setData(0x12, 0xBB);
  EXPECT_EQ(_memory.getData(0x12), 0xBB);

}

TEST(InstructionTest, jump) {
	Memory* _memory = new Memory();
	Register* _register = new Register();

	Instructions _instructions(_memory, _register);
	_instructions.jump(0x20);
	EXPECT_EQ(_register->programCounter, 0x20);

}

TEST(InstructionTest, executeSub) {
	Memory* _memory = new Memory();
	Register* _register = new Register();

	Instructions _instructions(_memory, _register);
	_instructions.executeSub(234);
	EXPECT_EQ(_register->programCounter, 234);

}

TEST(InstructionTest, skipIfConstEqual) {
	Memory* _memory = new Memory();
	Register* _register = new Register();
	_register->V[0] = 0x20;

	Instructions _instructions(_memory, _register);
	_instructions.skipIfConstEqual(0x20, 0);
	EXPECT_EQ(_register->programCounter, 2);

}

TEST(InstructionTest, skipIfConstNotEqual) {
	Memory* _memory = new Memory();
	Register* _register = new Register();
	_register->V[0] = 0x30;

	Instructions _instructions(_memory, _register);
	_instructions.skipIfConstNotEqual(0x20, 0);
	EXPECT_NE(_register->programCounter, 3);

}

TEST(InstructionTest, skipIfEqual) {
	Memory* _memory = new Memory();
	Register* _register = new Register();
	_register->V[0] = 0x30;
	_register->V[1] = 0x30;

	Instructions _instructions(_memory, _register);
	_instructions.skipIfEqual(0, 1);

	EXPECT_EQ(_register->programCounter, 2);

}

TEST(InstructionTest, storeConst) {
	Memory* _memory = new Memory();
	Register* _register = new Register();
	_register->V[0] = 0x30;
	byte constant = 33;

	Instructions _instructions(_memory, _register);
	_instructions.storeConst(constant, 0);

	EXPECT_EQ(_register->V[0], constant);

}

TEST(InstructionTest, addConst) {
	Memory* _memory = new Memory();
	Register* _register = new Register();
	_register->V[0] = 0x30;
	byte constant = 33;

	Instructions _instructions(_memory, _register);
	_instructions.storeConst(constant, 0);

	EXPECT_EQ(_register->V[0], constant);

}

//Write Instruction Tests