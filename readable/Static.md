# Static

**Static** means that if you declare variables or functions in static this can only be visible inside its c++ file. It's something like a private keyword in a class.

**Variables.cpp**

```c++
static int s_Variable = 10; // Global Variable from variables.cpp
```

**Main.cpp**

```c++
#include <iostream>

// Global Variable from main.cpp
int s_Variable = 20; // since we declare static on Variables.cpp we don't have any duplicate error.
int main() {
    std::cout << s_Variable;
}
```

---

If we want to access global variable from other .cpp files we can do this.

**Variables.cpp**

```c++
/*
Now we are not putting static in our declaration
*/
int g_Variable = 10; // Visible from other cpp files.
```

**Main.cpp**

```c++
#include <iostream>

extern int g_Variable; // extern means that it will look out for external variables

int main() {
    std::cout << g_Variable;
}
```

---

Same thing with functions

**Functions.cpp**

```c++
static void Func() {
    std::cout << "Funct";
}
```

**Main.cpp**

```c++
static void Func() {
	std::cout << "Funct";
}

int main() {
	Func();
}
```

*Always remember that if you create a global variables or functions within a cpp file remember to make it static to avoid variables or function duplication*

