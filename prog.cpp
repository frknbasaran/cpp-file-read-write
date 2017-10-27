/*
  Created by Furkan Basaran - Macbook-Air.local
  Date: 27-09-2017 11:58:13
  File name: prog.cpp
*/

/*
  Import dependencies
*/

// input output stream library
#include <iostream>
// string library for get line as a string from file
#include <string>
// included for streaming validate function
#include <sstream>
// file streaming library, using for (read by) and (write to) methods.
#include <fstream>
// include vector libraries for define string array
#include <vector>

// declare std namespace for using methods like 'method' instead of 'std::method' format 
using namespace std;

// main application method
int main() {
  
  // define source and target files as a string array
  const char* const iFiles[] = {"datasheets/Renewables.txt", "datasheets/Basics.txt", "datasheets/Precedence.txt", "datasheets/Project_info.txt","datasheets/U-renewables.txt","datasheets/Request.txt"};
  const char* const oFiles[] = {"datasheets/Renewables_generated.txt", "datasheets/Basics_generated.txt", "datasheets/Precedence_generated.txt", "datasheets/Project_info_generated.txt","datasheets/U-renewables_generated.txt","datasheets/Request_generated.txt"};
  // calculate array sizes for loop iteration
  const size_t lenIFiles = sizeof(iFiles) / sizeof(iFiles[0]);
  const size_t lenOFiles = sizeof(oFiles) / sizeof(oFiles[0]);
  
  // start loop 
  for (size_t i = 0; i < lenIFiles; ++i) {
      // define sourcefile from source files array
      ifstream sourceFile(iFiles[i]);
      // define string for hold current line data
      string currentLine;
      // define target file from source files array
      ofstream targetFile;
      targetFile.open(oFiles[i]);
      // loop while sourcefile line count not finished
      while (getline(sourceFile, currentLine))
      {
        // validate string
        istringstream iss(currentLine);
        // write into target file line by line
        targetFile << currentLine << endl;
      }
  }
  // return 0; everythings worked well!
  return 0;
}
