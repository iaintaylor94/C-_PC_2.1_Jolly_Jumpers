#ifndef _Jolly_Jumpers_H_
#define _Jolly_Jumpers_H_

#include <iostream>
#include <string>
#include <queue>

#include "FileIO.h"

class JollyJumpers {
  FileIO fileIO;
  std::queue<int> sequence;
  //int sequenceLength;

public:
  // CONSTRUCTORS AND DESTRUCTORS
  JollyJumpers() {};
  JollyJumpers(int, char **);
  ~JollyJumpers() {};

  // FILE IO
  bool getSequence(void);
  void printSequence(void);
  void printJolly(bool);

};


#endif