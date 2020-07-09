# Enums

**Enum** short for enumeration is a user defined names to a value. **Enum** default size is 32bit Integer

```c++
#include <iostream>

enum Test {
    A = 10, B = 20, C = 30 // if no defined values default will be 0, 1, 2;
};

int main() {
    Test val = B;
    std::cout << val;
}
```

We can set type of **enum** except with float.

```c++
enum Test : char { // we all know char can be an integer
    A, B, C // since we did not specify values default will be 0, 1, 2;
};
```

Using enum inside class

```c++
#include <iostream>

class Battery {
    public:
    enum Status {
        EMPTY, LOW = 20, FULL = 100
    };
    void setStatus(int status) {
        if (EMPTY == status) {
            std::cout << "EMPTY";
        }
        if (LOW == status) {
            std::cout << "LOW";
        }
        if (FULL == status) {
            std::cout << "FULL";
        }
    }
};

int main() {
    Battery b;
    b.setStatus(Battery::EMPTY); // this is how you access enum without the key Status because Status is not a namespace;
    b.setStatus(Battery::LOW);
    b.setStatus(Battery::FULL);
}
```

Above is just an example how to access enums from class to main function. The condition if statements are not that important.