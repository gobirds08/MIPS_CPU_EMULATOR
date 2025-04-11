#pragma once

#include "Component.h";

class ALUControl : public Component {
public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;

	void setDependencies(const std::vector<std::shared_ptr<Component>>& deps) override;
};