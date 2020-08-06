#include <iostream>
#include <string>

using namespace std;

void Logo() {
  system("clear");
  system("cls");
  cout << "$$\\   $$\\                                      $$$$$$\\             $$$$$$\\           " << endl;
  cout << "$$ | $$  |                                    $$  __$$\\           $$  __$$\\          " << endl;
  cout << "$$ |$$  / $$$$$$\\   $$$$$$\\   $$$$$$\\         $$ /  \\__| $$$$$$\\  $$ /  \\__|$$$$$$\\  " << endl;
  cout << "$$$$$  / $$  __$$\\ $$  __$$\\ $$  __$$\\ $$$$$$\\$$$$$$\\   \\____$$\\ $$$$\\    $$  __$$\\ " << endl;
  cout << "$$  $$<  $$$$$$$$ |$$$$$$$$ |$$ /  $$ |\\______|\\____$$\\  $$$$$$$ |$$  _|   $$$$$$$$ |" << endl;
  cout << "$$ |\\$$\\ $$   ____|$$   ____|$$ |  $$ |       $$\\   $$ |$$  __$$ |$$ |     $$   ____|" << endl;
  cout << "$$ | \\$$\\$$$$$$$\\ \\$$$$$$$\\ $$$$$$$  |       \\$$$$$$  |\\$$$$$$$ |$$ |     \\$$$$$$$\\ " << endl;
  cout << "\\__|  \\__|\\_______| \\_______|$$  ____/         \\______/  \\_______|\\__|      \\_______|" << endl;
  cout << "                             $$ |                                                    " << endl;
  cout << "                             $$ |                                                    " << endl;
  cout << "                             \\__|                                                    " << endl;
}

char* command = new char[10];
string sCommand;

int main() {
  Logo(); 
  while(sCommand != "close;") {
    cout << "keep-safe >> ";
    cin >> command;
    system(command);
    sCommand = command;
  }
  system("clear");
  system("cls");
}
