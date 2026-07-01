// sherpa-onnx/csrc/sherpa-display-tool.h
#pragma once

#include <string>

namespace sherpa_onnx {

class SherpaDisplayTool {
 public:
  void FinalizeCurrentSentence(const std::string &text) {
    if (!text.empty() && (text[0] != ' ' || text.size() > 1)) {
      printf("%s\n", text.c_str());
      fflush(stdout);
    }
  }
};

}  // namespace sherpa_onnx
