#include "headers/InstructionMem.h";

void InstructionMem::execute(const std::string& opcode, const std::vector<uint32_t>& data) {
	// Set Instruction From The Address In Mem Provided In Data Argument
}

std::vector<uint32_t> InstructionMem::getData() const {
	return { m_instruction };
}