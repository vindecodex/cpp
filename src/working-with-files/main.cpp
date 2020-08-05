#include <iostream>
#include <fstream>

using namespace std;

// ofstream - Stream class to write on files.
// ifstream - Stream class to read on files.
// fstream - Stream class for both read and write on files.

int main() {
  ofstream myfile;
  myfile.open("./files/sample.txt");
  myfile << "Sample \n";
  myfile.close();
}
