# Header Files

Traditionally header files used for putting function declarations. The place where we put all our function declarations without definitions.

Header files traditionally used **.h** for file extension

#### Compute.h

```c++
#pragma once

int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
```

#### Math.cpp

```c++
int Add(int x, int y) {
	return x + y;
}

int Subtract(int x, int y) {
	return x - y;
}

int Multiply(int x, int y) {
	return x * y;
}
```

#### Main.cpp

```c++
#include <iostream>
#include "Compute.h"

int main() {
	std::cout << Add(5,5) << '\n';
	std::cout << Subtract(10,5) << '\n';
	std::cout << Multiply(10,2) << '\n';
}
```

`#pragma once` - is used so that we can avoid the duplication error. Recommended to have this all the time.

`#include "Compute.h"` - used for relative path.

`#include <iostream>` - used for include directories.