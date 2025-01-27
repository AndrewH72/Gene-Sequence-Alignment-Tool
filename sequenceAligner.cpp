#include "sequenceAligner.h"

void SequenceAligner::initializeMatrices(){
  scoreMatrix[0][0] = 0;

  for(int i = 0; i < scoreMatrix[0].size(); i++){
    scoreMatrix[0][i] = i * gapPenalty;
  }

  for(int i = 0; i < scoreMatrix.size(); i++){
    scoreMatrix[i][0] = i * gapPenalty;
  }
}

void SequenceAligner::fillMatricesGlobal(){
  for(int i = 1; i < scoreMatrix.size(); i++){
    for(int j = 1; j < scoreMatrix[i].size(); j++){
      int leftValue = scoreMatrix[i][j - 1] + gapPenalty;
      int diagonalValue = scoreMatrix[i][j] == scoreMatrix[i - 1][j - 1] ? scoreMatrix[i - 1][j - 1] + matchScore : scoreMatrix[i - 1][j - 1] + mismatchPenalty;
      int aboveValue = scoreMatrix[i - 1][j] + gapPenalty;
      int maxValue = std::max(aboveValue, max(leftValue, diagonalVale));

      scoreMatrix[i][j] = maxValue;
      tracebackMatrix[i][j] = maxValue == leftValue ? 'L' : (maxValue == diagonalValue ? 'D' : 'A');
    }
  }
}

void SequenceAligner::fillMatricesLocal(){
  return;
}

std::pair<std::string, std::string> SequenceAligner::tracebackGlobal(){
  std::string optimalAlignment = "";
  optimalAlignment += seq2.back();
  while(i >= 0 && j >= 0)
}

SequenceAligner::SequenceAligner(std::string, std::string, int, int, int){

}

std::pair<std::string, std::string> SequenceAligner::performGlobalAlignment(){

}

std::pair<std::string, std::string> SequenceAligner::performLocalAlignment(){
  return
}

void SequenceAligner::printMatrix(){
  for(int i = 0; i < scoreMatrix.size(); i++){
    for(int j = 0; j < scoreMatrix[i].size(); j++){
      std::cout << scoreMatrix[i][j] << " " << std::endl;
    }
    std::cout << "\n";
  }
}
