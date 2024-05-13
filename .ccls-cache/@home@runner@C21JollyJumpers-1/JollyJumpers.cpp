#include "JollyJumpers.h"

JollyJumpers::JollyJumpers (int argc, char **argv) {
  fileIO.init (argc, argv);
}

bool JollyJumpers::getSequence (void) {
  std::queue<int> empty;
  std::swap(sequence, empty);
  return fileIO.getSequence (&sequence);
}
void JollyJumpers::printSequence (void) {
  // Temp data
  std::queue<int> copy;
  int pop;
  
  // Print sequence
  while (!sequence.empty()) {
    pop = sequence.front();
    sequence.pop();
    copy.push(pop);
    std::cout << pop << "  ";
  }
  std::cout << std::endl;
  
  // Reset Sequence
  while (!copy.empty()) {
    pop = copy.front();
    copy.pop();
    sequence.push(pop);
  }
}
void JollyJumpers::printJolly (bool Jolly) {
  fileIO.printJolly(Jolly);
}