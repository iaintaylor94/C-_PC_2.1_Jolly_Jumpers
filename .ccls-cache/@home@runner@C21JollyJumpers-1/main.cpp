#include <iostream>

#include "FileIO.h"
#include "JollyJumpers.h"

int main(int argc, char **argv) {
  JollyJumpers jollyJumpers (argc, argv);

  while (jollyJumpers.getSequence()) {
    jollyJumpers.printSequence();

    if (jollyJumpers.isJolly()) jollyJumpers.printJolly(true);
    else jollyJumpers.printJolly(false);
  }

  return 0;
}