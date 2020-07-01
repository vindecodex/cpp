# Functions

### Syntax

```c++
return_type function_name(parameter_type parameter_name) {
	body
}
```

:arrow_heading_down:

```c++
int Add(int x, int y) {
	return x + y
}
```

Use **void** if your function does not need to return anything. Create a function when there is a repeating block of code in your program.

### Use Created Function

```c++
int Add(int x, int y) {
	return x + y
}

int main() {
	int result = Add(2,2);
	std::cout << result;
}
```

If you have created a function in a separate file then you have to declare it on top of your main or other files that uses it. Remember only function declaration no definition.

#### Math.cpp

```c++
int Add(int x, int y) {
	return x + y
}
```

#### Main.cpp

```c++
#include <iostream>

int Add(int x, int y); // function declaration
// int Add(int,int); other way but with param name is recommended.
int main() {
	int result = Add(2,2);
	std::cout << result;
}
```

