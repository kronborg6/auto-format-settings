#include "project_type.hpp"
#include <string>

std::string toString(ProgramingLaunge lang) {
  switch (lang) {
  case ProgramingLaunge::Cpp:
    return "C++";
  case ProgramingLaunge::C:
    return "C";
  case ProgramingLaunge::Zig:
    return "Zig";
  default:
    return "Unknown";
  }
}
