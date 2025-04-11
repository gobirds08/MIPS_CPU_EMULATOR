#pragma once

#include "Component.h";

class SignExtender : Component {
public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;
};