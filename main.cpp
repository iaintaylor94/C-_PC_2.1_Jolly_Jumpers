#include <iostream>

#include "FileIO.h"
#include "JollyJumpers.h"

int main(int argc, char **argv) {
  JollyJumpers jollyJumpers (argc, argv);

  while (jollyJumpers.getSequence()) {
    while (!jollyJumpers.sequence.empty()) {
      std::cout << jollyJumpers.sequence.front() << " ";
      jollyJumpers.sequence.pop();
    }
    std::cout << std::endl;
    
    jollyJumpers.printJolly(true);
    jollyJumpers.printJolly(false);
  }

  return 0;
}