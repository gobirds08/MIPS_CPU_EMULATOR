#pragma once

#include "Component.h";
#include "Mux.h"

class PC : public Component {
private:
	uint32_t m_pc;
	std::shared_ptr<Mux> m_mux;

public:
	void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;

	void setDependencies(const std::vector<std::shared_ptr<Component>>& deps) override;
};