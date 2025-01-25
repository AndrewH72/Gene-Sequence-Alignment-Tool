#include "alignmentUtils.h"

bool AlignmentUtils::isValidDNASequence(const std::string& sequence){
  for(char c : sequence){
    c = std::toupper(c);
    if(c != 'A' && c != 'C' && c != 'T' && c != 'G'){
      return false;
    }
  }
  return true;
}

void AlignmentUtils::printAlignment(const std::pair<std::string, std::string>& alignment){
  std::string matchLine; 
  std::string firstAlignment = alignment.first;
  std::string secondAlignment = alignment.second;
  size_t maxLength = std::max(firstAlignment.length(), secondAlignment.length());
  
  std::transform(firstAlignment.begin(), firstAlignment.end(), firstAlignment.begin(), ::toupper());
  std::transform(secondAlignment.begin(), secondAlignment.end(), secondAlignment.begin(), ::toupper());

  if(!isValidDNASequence(firstAlignment) || !isValidDNASequence(secondAlignment)){
    std::cerr << "Error: One or both sequences are invalid. \n";
    return;
  }

  for(size_t i = 0; i < maxLength; i++){
    if(i < firstAlignment.length() && i < secondAlignment.length()){
      matchLine += (firstAlignment[i] == secondAlignment[i]) ? '|' : ' ';
    }
    else{
      matchLine += ' ';
    }
  }
  std::cout << firstAlignment << "\n" << matchLine << "\n" << secondAlignment << std::endl;
}
