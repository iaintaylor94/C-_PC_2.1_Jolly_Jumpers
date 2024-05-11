#ifndef _Jolly_Jumpers_H_
#define _Jolly_Jumpers_H_

#include <iostream>

#include "FileIO.h"

class JollyJumpers {
FileIO fileIO;
std::string sequence;

public:
  // CONSTRUCTORS AND DESTRUCTORS
  JollyJumpers() {};
  JollyJumpers(int, char **);
  ~JollyJumpers() {};

  // FILE IO
  bool getSequence(void);
  void printJolly(bool);
};


#endif