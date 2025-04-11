#pragma once

#include <string>
#include <variant>
#include <vector>
#include <memory>

class Component {
public:
	virtual ~Component() = default;

	virtual void execute(const std::string& opcode, const std::vector<uint32_t>& data) = 0;

	virtual std::vector<uint32_t> getData() const = 0;

	virtual void setDependencies(const std::vector<std::shared_ptr<Component>>& deps) = 0;
};