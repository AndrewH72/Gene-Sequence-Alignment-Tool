#ifndef ALIGNMENT_UTILS_H
#define ALIGNMENT_UTILS_H

#include <string>
#include <algorithm>

class AlignmentUtils{
  bool isValidDNASequence(const std::string&);
  void printAlignment(const std::pair<std::string, std::string>&)
};
#endif
