#include <iostream>

#include "Block.h"

using namespace std;

Block::Block(int theIndex, string thePreviousHash, int theTimestamp, string theData, string theHash)
{
  cout << "Initializing block" << endl;
  this->index = theIndex;
  this->previousHash = thePreviousHash;
  this->timestamp = theTimestamp;
  this->data = theData;
  this->hash = theHash;
}

int Block::getIndex()
{
  return this->index;
}

string Block::getPreviousHash()
{
  return this->previousHash;
}

string Block::getHash()
{
  return this->hash;
}

string Block::getData()
{
  return this->data;
}