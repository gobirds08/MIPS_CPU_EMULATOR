#pragma once

#include "Component.h";

class Mux : public Component {
private:
	uint32_t m_output;
	std::shared_ptr<Component> m_component_one;
	std::shared_ptr<Component> m_component_two;
	bool m_choose_zero;

public:
	virtual void execute(const std::string& opcode, const std::vector<uint32_t>& data) override;

	std::vector<uint32_t> getData() const override;

	void setDependencies(const std::vector<std::shared_ptr<Component>>& deps) override;
};