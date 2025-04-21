#include "headers/Mux.h";

void Mux::execute(const std::string& opcode, const std::vector<uint32_t>& data) {
	if (m_choose_zero) {
		m_output = m_component_one->getData()[0];
	} else {
		m_output = m_component_two->getData()[0];
	}
}

std::vector<uint32_t> Mux::getData() const {
	return { m_output };
}

void Mux::setDependencies(const std::vector<std::shared_ptr<Component>>& deps) {
	m_component_one = deps[0];
	m_component_two = deps[1];
}

