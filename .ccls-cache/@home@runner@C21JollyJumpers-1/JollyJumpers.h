#ifndef _Jolly_Jumpers_H_
#define _Jolly_Jumpers_H_

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <algorithm>

#include "FileIO.h"

class JollyJumpers {
  // FILE IO
  FileIO fileIO;
  std::queue<int> sequence;

  // PROCESS JOLLY SEQUENCE
  std::vector<bool> distance;
  void fillDistance (void);
  bool testJolly (void);
  

public:
  // CONSTRUCTORS AND DESTRUCTORS
  JollyJumpers() {};
  JollyJumpers(int, char **);
  ~JollyJumpers() {};

  // FILE IO
  bool getSequence(void);
  void printSequence(void);
  void printJolly(bool);

  // PROCESS JOLLY SEQUENCE
    bool isJolly (void);

};


#endif