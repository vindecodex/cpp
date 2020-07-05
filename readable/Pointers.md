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

