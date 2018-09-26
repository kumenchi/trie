#include <iostream>
#include <string>
#include "trie.h"

Trie::Trie()
{
  isWord = false;
  for (uint i = 0; i < (sizeof(node)/sizeof(*node)); i++){
    node[i] = nullptr;
  }
  //std::cout << sizeof(node)/sizeof(*node) << std::endl;
};

Trie::~Trie()
{
  //delete vals;
};

Trie& Trie::operator= (Trie& rhs)
{
  std::swap(node, rhs.node);
  std::swap(isWord, rhs.isWord);

  return *this;
};

void Trie::addAWord(std::string input)
{
  Trie *branch = this;

  for (uint i = 0; i < input.length(); i++) {
    //std::cout << i << std::endl;
    int letter = input[i] - 'a';
    //std::cout << letter << std::endl;
      if (!(branch->node[letter])) {
      branch->node[letter] = new Trie;
      }
      // Uncomment the following to test for letters that exist in the tree
      /*else
      {
        std::cout << "Exists" << std::endl;
      }*/
      branch = branch->node[letter];
      //std::cout << input[i] - 48 << std::endl;


  }
  branch->isWord = true;
};

bool Trie::isAWord(std::string input)
{
  return false;
};

std::vector<std::string> allWordsStartingWithPrefix(std::string input)
{
  std::vector<std::string> temp = {"t"};
  return temp;
};


int main ()
{
  Trie *trie = new Trie;
  //std::cout << sizeof(*trie)/sizeof(trie) << std::endl;
  //std::cout << *trie[0] << std::endl
  trie->addAWord("lasting");
  trie->addAWord("tent");
  return 0;
}
