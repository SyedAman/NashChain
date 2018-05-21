#include <iostream>

#include "Block.h"

using namespace std;

// Creates a block that should be the first block in a blockchain!
Block getGenesisBlock()
{
  return Block(0, "0", 1465154705, "This is the genesis block!", "asdgg");
}

int main()
{
  Block genesisBlock = getGenesisBlock();
  Block blockChain[0] = {};
  cout << "This is the NashChain!" << endl;
  return 0;
};