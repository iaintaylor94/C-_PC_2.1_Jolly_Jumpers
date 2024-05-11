#include <iostream>

#include "FileIO.h"
#include "JollyJumpers.h"

int main(int argc, char **argv) {
  JollyJumpers jollyJumpers (argc, argv);

  while (jollyJumpers.getSequence()) {
    jollyJumpers.printJolly(true);
    jollyJumpers.printJolly(false);
  }

  return 0;
}