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

TEST(InstructionTest, Jump) {
	Memory* _memory = new Memory();
	Register* _register = new Register();

	Instructions _instructions(_memory, _register);
	_instructions.jump(0x20);
	EXPECT_EQ(_register->programCounter, 0x20);

}

//Write Instruction Tests