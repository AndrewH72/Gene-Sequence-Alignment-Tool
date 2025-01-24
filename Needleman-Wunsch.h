#ifndef NEEDLEMAN_WUNSCH_H
#define NEEDLEMAN_WUNSCH_H
#include <string.h>


class NeedlemanWunsch{
  private:
    
    string seq1, seq2;
    int gapPenalty, matchScore, mismatchScore;
  public:
    NeedlemanWunsch();
    NeedlemanWunsch(string, string, int, int, int);
    NeedlemanWunsch(const NeedlemanWunsch&);

    initialize
};

#endif
