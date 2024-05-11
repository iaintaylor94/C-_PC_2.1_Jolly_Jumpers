#ifndef _FILEIO_H_
#define _FILEIO_H_

#include <iostream>
#include <fstream>
#include <queue>
#include <string>
#include <sstream>

class FileIO {
  std::ifstream inFile;
  std::ofstream outFile;

  void strToQueue(std::string, std::queue<int>*);

public:
  FileIO() {};
  ~FileIO() {
    inFile.close();
    outFile.close();
  };

  void init(int, char **);

  // IN ---- OUT
  bool getSequence(std::queue<int>*);
  void printJolly(bool);

};


#endif