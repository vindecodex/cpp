# Classes

**Classes** are just style of coding which is also helps organizing code and easy to maintain. Without class we can still create powerful programs like C language it does not have a class.

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