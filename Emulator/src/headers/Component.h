#pragma once

#include <string>
#include <variant>

class Component {
public:
	virtual ~Component() = default;

	virtual void execute(const std::string& opcode, const std::variant<uint8_t, uint16_t, uint32_t>& data) = 0;

	virtual std::variant<uint8_t, uint16_t, uint32_t> getData() const = 0;
};