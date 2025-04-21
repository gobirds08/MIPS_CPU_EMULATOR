#include "headers/CPU.h";

CPU::CPU() {
	std::shared_ptr<InstructionMem> instruction_mem = std::make_shared<InstructionMem>();;
	std::shared_ptr<Registers> registers = std::make_shared<Registers>();
	std::shared_ptr<Adder> adder_one = std::make_shared<Adder>();
	std::shared_ptr<Adder> adder_two = std::make_shared<Adder>();
	std::shared_ptr<Mux> mux_one = std::make_shared<Mux>();
	std::shared_ptr<Mux> mux_two = std::make_shared<Mux>();
	std::shared_ptr<Mux> mux_three = std::make_shared<Mux>();
	std::shared_ptr<ALU> alu = std::make_shared<ALU>();
	std::shared_ptr<PC> pc = std::make_shared<PC>();
	std::shared_ptr<DataMemory> data_mem = std::make_shared<DataMemory>();
	std::shared_ptr<Control> control = std::make_shared<Control>();
	std::shared_ptr<Shifter> shifter_one = std::make_shared<Shifter>();
	std::shared_ptr<Shifter> shifter_two = std::make_shared<Shifter>();
	std::shared_ptr<SignExtender> sign_extender = std::make_shared<SignExtender>();

	// Setup Components Here
	instruction_mem->setDependencies({ pc });

	//Add To Components Vector in CPU
	m_components.push_back(instruction_mem);
	m_components.push_back(registers);
	m_components.push_back(adder_one);
	m_components.push_back(adder_two);
	m_components.push_back(mux_one);
	m_components.push_back(mux_two);
	m_components.push_back(mux_three);
	m_components.push_back(alu);
	m_components.push_back(pc);
	m_components.push_back(data_mem);
	m_components.push_back(control);
	m_components.push_back(shifter_one);
	m_components.push_back(shifter_two);
	m_components.push_back(sign_extender);
}

void CPU::run() {

}