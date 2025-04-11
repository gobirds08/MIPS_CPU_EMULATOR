#pragma once

#include "Component.h";
#include "PC.h";

class InstructionMem : public Component {
private:
	uint32_t m_instruction;
	std::shared_ptr<PC> m_pc;

public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;

	void setDependencies(const std::vector<std::shared_ptr<Component>>& deps) override;
};