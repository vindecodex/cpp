# Constructors

**constructors** is a very special type of method which runs every time we instantiate an object.

```c++
#include <iostream>

class Entity {
    int x,y;
    void Print() {
        std::cout << x << ", " << y;
    }
}

int main() {
    Entity e;
    e.Print(); // outputs random number for x and y
}
```

The problem above is that once we instantiate a class we haven't set or initialized value on x and y by default. To solve we can use Init method and call it from main function.

```c++
#include <iostream>

class Entity {
    int x,y;
    void Init() {
        x = 10;
        y = 20;
    }
    void Print() {
        std::cout << x << ", " << y;
    }
}

int main() {
    Entity e;
    e.Init();
    e.Print(); // outputs random number for x and y
}
```

Now another problem is that we're adding code in main function for initializing fields in our class. So the best way to solve this is using **constructor**.

```c++
#include <iostream>

class Entity {
    int x, y;
    Entity() { // every time we instantiate this class this will run.
        x = 10;
        y = 20;
    }
    void Print() {
        std::cout << x << ", " << y;
    }
}

int main() {
    Entity e;
    e.Print(); //outputs 10, 20
}
```

Constructor with parameters

```c++
#include <iostream>

class Entity {
    int x,y;
    Entity(int xx, int yy) {
        x = xx;
        y = yy;
    }
    void Print() {
        std::cout << x << ", " << y;
    }
}

int main() {
    Entity e(100, 200);
    e.Print(); //outputs 100, 200
}
```

We can delete constructor or set it to private if we like that no one can instantiate our class.

```c++
class Entity {
    private:
    	Entity(){}
}
```

or

```c++
class Entity {
    Entity() = delete;
}
```

