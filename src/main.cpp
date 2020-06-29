#include <iostream>

// function declarations
void Log(const char* message); // best practice to add name of parameter
int Add(int,int); // can declare without parameters name

int main() {
	Log("Hello World");
	std::cout << Add(20,20) << std::endl;
	std::cin.get();
}
