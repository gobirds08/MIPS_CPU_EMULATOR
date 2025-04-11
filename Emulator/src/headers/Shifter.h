#pragma once

#include "Component.h";

class Shifter : Component {
public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;
};