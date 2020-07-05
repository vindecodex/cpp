# Classes vs Structs

The only difference is their visibility.

**Class** in default are private visibility

```c++
class Player {
    // Default for attributes were private.
    public:
    int positionX, positionY;
    int speed;
    
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player;
    player.Move(10,25);
}
```

**Struct** in default are in public visibility

```c++
struct Player {
    // Default for attributes were public.
    int positionX, positionY;
    int speed;
    
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player;
    player.Move(10,25);
}
```

Use **struct** if it is just about data.

Use **Class** if it has functionalities.