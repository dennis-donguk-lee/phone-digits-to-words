#include "phone2word.h"

// A recursive function to add all possible words that can be obtained 
// by input number[] of size n. The output words are one by one stored 
// in output[] 
void all_combinations_rec(
  std::string const & phone_number,
  std::map<char, std::string>& keypad,
  const int currDigit,
  std::vector<std::string>& res,
  const int numSize
)
{
  // Base case, if current output word is prepared 
  if (currDigit == numSize)
  {
    return;
  }

  // Try all possible characters for current digit in number[] 
  // and recur for remaining digits 
  for (auto number : phone_number)
  {
    
  }
}

// A wrapper over all_combinations_rec(). It creates an output array and 
// calls all_combinations_rec() 
std::vector<std::string> all_combinations(
  std::string const & phone_number,
  std::map<char, std::string>& keypad
)
{
  std::vector<std::string> res{};



  return res;
}
