#include "headers/PC.h";

void PC::execute(const std::string& opcode, const std::vector<uint32_t>& data) {
	// Set Instruction From The Address In Mem Provided In Data Argument
	/*std::vector<uint32_t> instruction_address = m_pc->getData();*/
	m_pc = m_mux->getData()[0];
}

std::vector<uint32_t> PC::getData() const {
	return { m_pc };
}

void PC::setDependencies(const std::vector<std::shared_ptr<Component>>& deps) {
	m_mux = std::dynamic_pointer_cast<Mux>(deps[0]);
}