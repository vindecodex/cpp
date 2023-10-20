# Function Overloading
Having a multiple function signature of **<u>input parameters</u>** is function overloading. This is useful when we want to handle different parameter signature of our function.

Note: That function overloading doesn't have a limit.

```c++
#include <iostream>

void PrintNumber(int n);
void PrintNumber(double n);
void PrintNumber(float n);

int main() {
	int n1 = 1;
	double n2 = 2.9;
	float n3 = 2.100;

	PrintNumber(n1);
	PrintNumber(n2);
	PrintNumber(n3);
}

void PrintNumber(int n) {
	std::cout << n << std::endl;
}

void PrintNumber(double n) {
	std::cout << n << std::endl;
}

void PrintNumber(float n) {
	std::cout << n << std::endl;
}
```

### When it doesn't work ?
Function overloading doesn't work when changing <u>return type only</u>.
```c++
void PrintNumber(int n);
int PrintNumber(int n); // This will cause an error
```
