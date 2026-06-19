#pragma once

#include <format>
#include <string>
#include <string_view>

namespace liballen {

inline auto greet(std::string_view name) -> std::string {
    return std::format("Hello, {}!", name);
}

} // namespace liballen
