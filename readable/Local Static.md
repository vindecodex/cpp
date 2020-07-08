# Local Static

```c++
#include <iostream>

void Function() {
    int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main() {
    Function(); // outputs 1
    Function(); // outputs 1
    Function(); // outputs 1
    Function(); // outputs 1
}
```

With Static this also applies on **class**

```c++
#include <iostream>

void Function() {
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main() {
    Function(); // outputs 1
    Function(); // outputs 2
    Function(); // outputs 3
    Function(); // outputs 4
}
```

Equivalent Code below

```c++
#include <iostream>

int i = 0;

void Function() {
    i++;
    std::cout << i << std::endl;
}

int main() {
    Function(); // outputs 1
    Function(); // outputs 2
    Function(); // outputs 3
    Function(); // outputs 4
}
```

Now the bad thing about creating global variable is that it is accessible from the entire file. If we use the static style outside of class or function will not see the declared variable.