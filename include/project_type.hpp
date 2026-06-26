#pragma once

#include <string>

enum class ProgramingLaunge {
  Cpp,
  C,
  Rust,
  Zig
};

std::string toString(ProgramingLaunge lang);
