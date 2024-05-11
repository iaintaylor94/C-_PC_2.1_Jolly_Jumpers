#ifndef _Jolly_Jumpers_H_
#define _Jolly_Jumpers_H_

#include <iostream>
#include <string>
#include <queue>

#include "FileIO.h"

class JollyJumpers {
  FileIO fileIO;
  
  //int sequenceLength;

public:
  // CONSTRUCTORS AND DESTRUCTORS
  JollyJumpers() {};
  JollyJumpers(int, char **);
  ~JollyJumpers() {};

  // FILE IO
  bool getSequence(void);
  void printJolly(bool);

    std::queue<int> sequence;
};


#endif