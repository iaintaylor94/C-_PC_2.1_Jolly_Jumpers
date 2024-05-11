#include "FileIO.h"

void FileIO::init(int argc, char **argv) {
  // IF argc != 2
  if (argc != 2) std::cerr << "Usage: " << argv[0] << " <input file>" << std::endl;

  // Open inFile
  inFile.open(argv[1]);
  if (!inFile) std::cerr << "Could not open " << argv[1] << std::endl;
  else std::cerr << "Opened " << argv[1] << std::endl;

  // Open outFile
  std::string fileName = argv[1];
  fileName += ".out";

  outFile.open(fileName);

  if (!outFile) std::cerr << "Could not open " << fileName << std::endl;
  else std::cerr << "Opened " << fileName << std::endl;
}


bool FileIO::getSequence (std::string* strPtr) {
  std::getline(inFile, *strPtr);

  if (strPtr->empty()) return false;
  else return true;
}
void FileIO::printJolly (bool J) {
  if (J) {
    outFile << "Jolly\n";
    std::cout << "Jolly\n";
  }
  else {
    outFile << "Not Jolly\n";
    std::cout << "Not Jolly\n";
  }
}