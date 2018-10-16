#include "phone2word.h"

// A recursive function to add all possible words that can be obtained 
// by input number[] of size n. The output words are one by one stored 
// in output[] 
void all_combinations_rec(
  std::string const & phone_number,
  std::map<char, std::string>& keypad,
  const int currdigit,
  const int phnumlen,
  std::string& word,
  std::vector<std::string>& res
)
{
  // Base case, if current output word is prepared 
  if (currdigit == phnumlen)
  {
    res.push_back(word);
    return;
  }

  // Try all possible characters for current digit in number[] 
  // and recur for remaining digits 
  for (auto i : keypad[phone_number[currdigit]])
  {
    auto eachword = word + i;
    all_combinations_rec(
      phone_number, keypad, currdigit + 1, phnumlen, eachword, res
    );
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
  std::string word{};

  all_combinations_rec(
    phone_number, keypad, 0, phone_number.length(), word, res
  );

  return res;
}
