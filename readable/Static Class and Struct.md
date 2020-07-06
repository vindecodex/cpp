# Static Class and Static Structs

When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

**Static Class Variables**

```c++
#include <iostream>

class Entity {
    public:
    static int Counter; // static member
    Entity(int n1 = 0, int n2 = 0) {
        m_numOne = n1;
        m_numTwo = n2;
        Counter++;
    }
    private:
    /*
    Convention naming m_ for member of the class
    */
    int m_numOne, m_numTwo;
}

// Initialize static member of class Entity
int Entity::Counter = 0; // scope resolution operator ::

int main() {
    Entity e1(2,10); // Declare e1
    Entity e2(5,10); // Declare e2
    
    std::cout << "Total Count: " << Entity::Counter; // outputs 2
};
```

**Static Class Function**

```c++
#include <iostream>

class Entity {
    public:
    int x, y;
    static void Print(Entity e) { // we cannot access this in an instance of a class
        std::cout << e.x << ", " << e.y;
    }
};

int main() {
    Entity e;
    e.x = 20;
    e.y = 300;
    Entity::Print(e); // outputs 20, 30
}
```

---

#### Static Struct Variable

```c++
#include <iostream>

struct Entity {
    static int x, y;
    void Print() {
        std::cout << x << ", " << y;
    }
}

int Entity::x; // can set default value here.
int Entity::y; // can set default value here.

int main() {
    Entity e1;
    Entity e2;
    
    e1.x = 10; // in reality this is Entity::x
    e1.y = 20; // Entity::y
    
    e2.x = 100; // Entity::x
    e2.y = 200; // Entity::y
    e.Print(); //outputs 100, 200
    /*
    Even if we create two instance of the entity we only have single instance of x and y where overiding the memory of the first declaration which is e1.
    */
}
```

**Static Struct Function**

```c++
#include <iostream>

struct Entity {
    // set all to static
    static int x, y;
    static void Print() {
        std::cout << x << ", " << y;
    }
}

int Entity::x; // can set default value here.
int Entity::y; // can set default value here.

int main() {
    // Entity e1; we don't need this anymore since all members of our class are static
    // Entity e2;
    
    Entity::x = 10;
    Entity::y = 20;
    
    Entity::Print(); // this is how we call the static function
}
```

---

Remember that a **static** type member doesn't have any class instance.

That is why below we added Entity as parameter type so that Print function knows what variable x and y is.

```c++
#include <iostream>

class Entity {
    public:
    int x, y;
    static void Print(Entity e) { // we cannot access this in an instance of a class
        std::cout << e.x << ", " << e.y;
    }
};
```

**Static** is useful when we need data that doesn't change.