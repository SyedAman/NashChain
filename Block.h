#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <vector>

using namespace std;

class Block
{
  int index, timestamp;
  string hash, previousHash, data;

public:
  Block(int index, string previousHash, int timestamp, string data, string hash);

  int getIndex(void);
  string getPreviousHash(void);
  string getHash(void);
  string getData(void);
};

#endif