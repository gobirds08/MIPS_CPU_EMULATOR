#pragma once

#include "Component.h";

class InstructionMem : public Component {
private:
	uint32_t m_instruction;

public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;
};