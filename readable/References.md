# References

Referencing is just like an alias of an existing variable. But also a syntactic sugar with pointers.

```c++
int main() {
    int num = 10;
    int& ref = num; // we now have an alias of num with the name of ref
}
```

`ref` is not a variable and it does not exist in the memory it only exist inside our source code an alias for `num` variable that we created.

```c++
#include <iostream>

int main() {
	int num = 10;
	int& ref = num;
	ref = 20;
	std::cout << num; // output of 20;
}
```

####  Without Pointer References

```c++
#include <iostream>

void Increment(int* value) {
    (*value)++; // dereferencing first before incrementing because it is an address not a value yet.
}

int main() {
    int num = 0;
    Increment(&num); // we are passing the address of num;
    std::cout << num; // outputs 1
}
```

#### Much more cleaner if we use Pointer Reference

```c++
#include <iostream>

void Increment(int& value) { // int& value = num
	value++; // we have now the alias of num which we can manipulate also the value of it.
}

int main() {
    int num = 0;
    Increment(num); // passing the variable
    std::cout << num; // outputs 1
}
```

