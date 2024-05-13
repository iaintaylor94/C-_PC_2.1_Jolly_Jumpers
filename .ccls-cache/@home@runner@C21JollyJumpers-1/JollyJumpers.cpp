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

void JollyJumpers::fillDistance (void) {
  // INIT DISTANCE
  distance.clear();
  for (int i = 0; i < sequence.size() - 1; i++) {
    distance.push_back(false);
  }

  int first = 0;
  int second = sequence.front(); sequence.pop();
  
  while (true) {
    first = second;
    second = sequence.front(); sequence.pop();

    distance [abs(first - second)] = true;
    
    if (sequence.empty()) break;
  }
}
bool JollyJumpers::testJolly (void) {
  for (auto it = distance.begin() + 1; it != distance.end(); it++) {
    if (!*it) return false;
  }
  return true;
}
bool JollyJumpers::isJolly (void) {
  fillDistance();
  return testJolly();
}