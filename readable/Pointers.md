# Pointers

**Pointer** is an integer that stores/holds a memory address.

```c++
int main() {
    void* ptr = nullptr; // untyped pointer with a null value    
}
```

```c++
#include <iostream>

int main() {
    int num = 10;
    void* ptr = &num;
    std::cout << ptr; // this will output a memory address of num variable.
}
```

Types in pointer does not matter.

```c++
int main() {
    int num = 10;
    int* ptr = &num; // this is going to work
    double* ptr = (double*)&num; // this is still going to work
}
```

Manipulating the value of the address.

```c++
#include <iostream>

int main() {
	int num = 10;
	int* ptr = &num;
	*ptr = 11; // using * we are manipulating value of num;
	std::cout << num;
}
```

`&` - represents the address

`*` - represents the value of the address