#include "headers/ALU.h";

void ALU::execute(const std::string& opcode, const std::vector<uint32_t>& data) {
	// Set Instruction From The Address In Mem Provided In Data Argument
	/*std::vector<uint32_t> instruction_address = m_pc->getData();*/
}

std::vector<uint32_t> ALU::getData() const {
	return {  };
}

void ALU::setDependencies(const std::vector<std::shared_ptr<Component>>& deps) {
	/*m_pc = std::dynamic_pointer_cast<PC>(deps[0]);*/
}