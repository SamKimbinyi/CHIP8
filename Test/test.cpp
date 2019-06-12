#include "pch.h"
#include"../CHIP8/Memory.h"
#include"../CHIP8/Memory.cpp"
#include"../CHIP8/Byte.h"
#include"../CHIP8/Instructions.h"
#include"../CHIP8/Register.h"
#pragma comment(lib, "Ws2_32.lib")

TEST(MemoryTests, GetData) {
	Memory _memory;
	_memory.setData(0x00, 0xA3);
  EXPECT_EQ(_memory.getData(0x00), 0xA3);

  _memory.setData(0x12, 0xBB);
  EXPECT_EQ(_memory.getData(0x12), 0xBB);

}