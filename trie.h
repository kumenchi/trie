#include <iostream>
#include <vector>
#include <string>

class Trie
{
  Trie *node[26];
  bool isWord;

public:
  Trie();
  ~Trie();
  Trie& operator= (Trie& rhs);
  void addAWord(std::string);
  bool isAWord(std::string);
  std::vector<std::string> allWordsStartingWithPrefix(std::string);
};
