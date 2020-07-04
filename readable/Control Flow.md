# Control Flow

**continue**

```c++
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue; // if its true it will skip below code and continue to next iteration.
    std::cout << "Hello, World " << i;
}
```

When we hit continue it skips to the next iteration

**break**

```c++
for (int i = 0; i < 10; i++) {
    if (i > 5) break; // once its true it will stop the entire loop or exit the loop.
    std::cout << "Hello, World " << i;
}
```

When we hit break it stops the entire loop

**return**

```c++
int main() {
    int x = 10;
    if (x < 20) return 10; // will exit from the entire function.
    std::cout << "Hello, World";
}
```

When we hit return it stops the entire function with a value that was returned