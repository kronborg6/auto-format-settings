#pragma once

#include "langues.hpp"
#include <filesystem>
#include <string>
#include <unordered_map>
#include <vector>
namespace fs = std::filesystem;

namespace option {
  class Config {
    public:
      Config();
      Config(fs::path path);

    private:
      fs::path path_;
      std::string filename_;
      std::vector<Languge> languge_;
      std::vector<std::string> ides_;
  };

} // namespace option
