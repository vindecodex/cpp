#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ofstream - Stream class to write on files.
// ifstream - Stream class to read on files.
// fstream - Stream class for both read and write on files.

const string g_Fclose = "close;";
string myLine;

int main() {
  ofstream myfile("./files/.vsec");
  while (myLine != g_Fclose) {
    cout << "Input Line: ";
    cin >> myLine;
    if (myfile.is_open()) {
      if (myLine != g_Fclose) {
        myfile << myLine << endl;
      }
    } else {
      cout << "Unable to open file";
    }
  }
  myfile.close();
}
