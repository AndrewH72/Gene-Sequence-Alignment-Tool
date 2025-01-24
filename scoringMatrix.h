#ifndef SCORING_MATRIX
#define SCORING_MATRIX

class ScoringMatrix{
private:
  int matchScore, mismatchPenality, gapPenalty;
public:
  ScoringMatrix(int, int, int);
  int getMatchScore() const;
  int getMismatchPenalty() const;
  int getGapPenalty() const;
};
#endif
