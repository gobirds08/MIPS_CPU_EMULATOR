#pragma once

#include "InstructionMem.h";
#include "Registers.h";
#include "Adder.h";
#include "Mux.h";
#include "ALU.h";
#include "PC.h";
#include "DataMemory.h";
#include "Control.h";
#include "ALUControl.h";
#include "Shifter.h";
#include "SignExtender.h";

class CPU {
public:
	CPU();

	void run();
};