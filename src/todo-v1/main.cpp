#include <string>
#include <iostream>
#include <vector>

class Todo {
  std::vector<std::string> todo;

  public:
  void setTodo(std::string t) {
    todo.push_back(t);
  }
  std::vector<std::string> getTodo() {
    return todo;
  }
  void deleteTodo(int index) {
    todo.erase(todo.begin() + index);
  }
};

enum OPTIONS {
  OPTION_A = 1,
  OPTION_B,
  OPTION_C,
  OPTION_D
};

void ClearScreen() {
  std::cout << std::string(100, '\n');
}

int main() {
  Todo todo;
  bool done = false;
  int option = 0;
  int index = 0;
  std::string t;

  while (!done) {
    std::cout << "Options" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. Show Task" << std::endl;
    std::cout << "3. Delete Task" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << "Option ? : ";
    std::cin >> option;
    ClearScreen();
    switch(option) {
      case OPTION_A:
        ClearScreen();
        option = 0;
        std::cout << "Add Task : ";
        std::cin >> t;
        todo.setTodo(t);
        break;
      case OPTION_B:
        ClearScreen();
        option = 0;
        std::cout << "Tasks\n";
        std::cout << "---------------\n";
        for (std::string s : todo.getTodo()) {
          std::cout << s << "\n";
          std::cout << "---------------\n";
        }
        break;
      case OPTION_C:
        ClearScreen();
        option = 0;
        std::cout << "Index to be deleted: ";
        std::cin >> index;
        todo.deleteTodo(index);
        std::cout << "Deleted\n";    
        break;
      case OPTION_D:
        ClearScreen();
        option = 0;
        std::cout << "Exiting";
        done = true;
        break;
      default:
        ClearScreen();
    }
  }
}
