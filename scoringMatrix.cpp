#include "scoringMatrix.h"

ScoringMatrix::ScoringMatrix(int mS, int mMS, int gP){
  matchScore = mS;
  mismatchPenalty = mMS;
  gapPenalty = gP;
}

int ScoringMatrix::getMatchScore() const{
  return matchScore;
}

int ScoringMatrix::getMismatchPenalty() const{
  return mismatchPenalty;
}

int ScoringMatrix::getGapPenalty() const{
  return gapPenalty;
}

