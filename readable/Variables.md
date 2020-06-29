# Variables

**1 byte** - *8 bits of data*

**4 bytes** - *32 bits of data*

---

### Numbers

**int** - *4 bytes large up to -2 billion -> 2 billion, since int is a **signed type** 32 bits - 1 ( to store the sign -, +) = 31 bits  and we have **two** possible value which is **0** and **1** so to solve this **2^31** = **2,147,483,648** - 1 which we are going to store the zero value **final 2,147,483,647***



**integer** can be unsigned with the `unsigned` keyword. With this we will have the 32 bits since we don't need to store signs. **2^32 = 4,294,967,296**. With this we no longer have negative values.

```c++
int main() {
	unsigned int num = 1;
	return num;
}
```

**float** - *4 bytes large. When declaring a float must have **f** or **F** end of the value*

```c++
float num = 5.5f
float num = 5.5F
```

**double** - *8 bytes large*

**long** *- 4 bytes of data (depends upon the compiler).*

**long long** - *8 bytes of data*



### Characters

**char** - *1 byte of data. Character can accept numbers also but it will be transformed with its equivalent character.*

```c++
int main() {
	char c = 65; // if we change this to 'A' still outputs a character
	std::cout << c;
}

output: A
```

**short** - *2 bytes of data. Short accepts character but outputs a number equivalent.*

```c++
int main() {
	short s = 'A'; // if we change this to 65 still outputs a number
	std::cout << s;
}

output: 65
```



### Boolean

**bool** - *1 byte large it only contains **1 and 0***

```c++
int main() {
	bool tf = true;
	std::cout << tf;
}

output: 1
```



*To check if how much byte is a type we can use the keyword `sizeof`*

```c++
std::cout << sizeof(double);

output: 8
```

