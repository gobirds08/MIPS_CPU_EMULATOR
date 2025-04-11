#include "headers/CPU.h";

CPU::CPU() {
	std::shared_ptr<InstructionMem> instruction_mem = std::make_shared<InstructionMem>();

	m_components.push_back(std::make_shared<PC>());
	m_components.push_back(std::make_shared<Registers>());
	m_components.push_back(std::make_shared<ALU>());
	m_components.push_back(std::make_shared<DataMemory>());
	m_components.push_back(std::make_shared<Control>());
	m_components.push_back(std::make_shared<ALUControl>());
	/*m_components.push_back(std::make_shared<Registers>());
	m_components.push_back(std::make_shared<Registers>());
	m_components.push_back(std::make_shared<Registers>());*/
}

void CPU::run() {

}