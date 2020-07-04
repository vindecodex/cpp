# Loops

#### For loop

```c++
for (int i = 0; i < 5; i++) {
	// Code here
}
```

Other ways 001

```c++
int i = 0;
for ( ; i < 5; i++) {
    // Code here
}
```

Other ways 002

```c++
int i = 0;
bool condition = true;
for ( ;condition; ) {
    std::cout << "Hello, World\n";
    i++;
    if (i < 5) condition = false;
}
```

---

#### While loop

```c++
int i = 0;
while (i < 5) {
	// Code here
}
```

---

#### Do While loop

```c++
bool condition = true;
do {
    // Code here
} while(condition)
```