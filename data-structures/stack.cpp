#include <iostream>
using namespace std;

template <class T>
class Stack {
  private:
    T *stack;
    int size;
    int index = 0;

  public:
    Stack(int size) {
      stack = new T[size];
    }

    ~Stack() {
      delete stack;
    }

    void push(T x) {
      if (index < size) {
        stack[index++] = x;
      }
    }

    void pop() {
      if (index >= 0) {
        index--;
      }
    }

    void print() {
      cout << "[";
      for (int i = 0; i < index; ++i) {
        cout << stack[i] << ", ";
      }
      cout << "]" << endl;
    }
};

int main() {
  cout << "\nEnter Size of stack: ";
  int size;
  cin >> size;
  Stack<int> stack = Stack<int>(size);
  int option;
  int x;
  do {
    cout << "\n1. Push";
    cout << "\n2. Pop";
    cout << "\n3. Exit";
    cout << "\nEnter your option: ";
    cin >> option;
    switch (option) {
      case 1:
        cout << "\nInsert : ";
        cin >> x;
        stack.push(x);
        break;
      case 2:
        stack.pop();
        break;
      case 0:
        break;
    }
    stack.print();
  } while (option != 0);
}
