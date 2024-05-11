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

void FileIO::strToQueue (std::string str, std::queue<int> *queue) {
  std::stringstream ss(str);
  std::string token;
  while (ss >> token) {
    queue->push(std::stoi(token));
  }
}
bool FileIO::getSequence (std::queue<int> *queuePtr) {
  std::string inStr;
  std::getline(inFile, inStr);

  if (inStr.empty()) 
    return false;
  else {
    strToQueue (inStr, queuePtr);
    return true;
  }
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