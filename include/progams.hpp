#pragma once

#include "processInfo.hpp"

#include <string>
#include <unordered_map>
#include <vector>

struct Programs {
    // std::vector<ProcessInfo> formaters;
    std::unordered_map<std::string, ProcessInfo> formaters;
    // bool
};
