#ifndef SEQUENCE_ALIGNER_H
#define SEQUENCE_ALIGNER_H

#include <string>
#include <vector>
#include <algorithm>

class SequenceAligner{
private:
  std::string seq1, seq2;
  std::vector<std::vector<int>> scoreMatrix;
  std::vector<std::vector<char>> tracebackMatrix;
  int matchScore, mismatchPenalty, gapPenalty;

  void initializeMatrices();
  void fillMatricesGlobal();
  void fillMatricesLocal();
  std::pair<std::string, std::string> tracebackGlobal();
  std<std::string, std::string> tracebackLocal();
public:
  SequenceAligner(std::string, std::string, int, int, int);
  std::pair<std::string, std::string> performGlobalAlignment();
  std::pair<std::string, std::string> performLocalAlignment();
  void printMatrix();
};
#endif
