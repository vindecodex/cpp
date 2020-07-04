# Conditions and branches

#### Syntax

```c++
if (condition) {
	// branch of code
} else if (condition) {
    // another branch of code
} else {
    // another branch of code
}
```

**condition** only contains **0** for false and **1** or **> 1** for true.

```c++
int condition = 10;
bool comparisonResult = condition > 5; // output is 1 which is true
if (comparisonResult) { // check if zero or one
    // branch of code if one
}
```

#### Shorthand

```c++
// Only works if code is only one line.
if (condition) // code here
else if (condition) // code here
else // code here
```

#### More shorthand

```c++
int condition = 10;
bool comparisonResult = (condition > 11) ? true : false; // output false since condition is not greater than 11
```

