#ifndef _FILEIO_H_
#define _FILEIO_H_

#include <iostream>
#include <fstream>
#include <string>

class FileIO {
  std::ifstream inFile;
  std::ofstream outFile;

public:
  FileIO() {};
  ~FileIO() {
    inFile.close();
    outFile.close();
  };

  void init(int, char **);

  // IN ---- OUT
  bool getSequence(std::string*);
  void printJolly(bool);

};


#endif