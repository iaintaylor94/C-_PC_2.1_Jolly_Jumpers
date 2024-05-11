#include "JollyJumpers.h"

JollyJumpers::JollyJumpers (int argc, char **argv) {
  fileIO.init (argc, argv);
}

bool JollyJumpers::getSequence (void) {
  return fileIO.getSequence (&sequence);
}
void JollyJumpers::printJolly (bool Jolly) {
  fileIO.printJolly(Jolly);
}